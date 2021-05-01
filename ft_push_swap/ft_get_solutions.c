/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_solutions.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 10:36:26 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/01 13:05:10 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_get_solutions(t_stack stack, char instructions_set[3][4], \
		char *instructions, int nb_instuctions, t_solution *solution)
{
	char	*tmp;

	if (ft_is_stack_sorted(&stack, ASCENDANT))
	{
		if (!solution->nb_instuctions)
		{
			char **new = malloc(2 * sizeof(char *));
			new[0] = ft_strdup(instructions);
			new[1] = 0;
			free(solution->chosen_instructions);
			solution->chosen_instructions = new;
			solution->nb_instuctions = nb_instuctions;
			return ;
		}
		else
		{
			if (nb_instuctions < solution->nb_instuctions)
			{
				char **new = malloc(2 * sizeof(char *));
				new[0] = ft_strdup(instructions);
				new[1] = 0;
				for (int i = 0; solution->chosen_instructions[i]; i++)
					free(solution->chosen_instructions[i]);
				free(solution->chosen_instructions);
				solution->chosen_instructions = new;
				solution->nb_instuctions = nb_instuctions;
			}
			else if (nb_instuctions == solution->nb_instuctions)
			{
				int size = 0;
				while (solution->chosen_instructions[size])
					size++;
				char **new = malloc((size + 2) * sizeof(char *));
				new[size + 1] = 0;
				new[size] = ft_strdup(instructions);
				for (int i = 0; i < size; i++)
					new[i] = solution->chosen_instructions[i];
				free(solution->chosen_instructions);
				solution->chosen_instructions = new;
				solution->nb_instuctions = nb_instuctions;
			}
			return ;
		}
	}
	if (nb_instuctions > solution->nb_instuctions)
		return ;
	for (int i = 0; i < 3; i++)
	{
		t_stack	temp_stack = stack;
		temp_stack.content = malloc(stack.size * sizeof(int));
		for (int j = 0; j < stack.size; j++)
			temp_stack.content[j] = stack.content[j];
		tmp = ft_strjoin(instructions, instructions_set[i]);
		execute_intruction(instructions_set[i], &temp_stack, 0);
		char *tmp2 = tmp;
		tmp = ft_strjoin(tmp, " ");
		free(tmp2);
		ft_get_solutions(temp_stack, instructions_set, tmp, nb_instuctions + 1, solution);
		free(tmp);
		free(temp_stack.content);
	}
}
