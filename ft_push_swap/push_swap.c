/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:13:19 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/01 12:54:12 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	construct_stack(&a);
	construct_stack(&b);
	fill_stack(&a, 1, argc, argv);
	ft_verbose(&a, &b, 0);
	char	instructions_set[3][4] = {"sa", "ra", "rra"};
	char	*instructions = ft_strdup("");
	char	**chosen_instructions = malloc(sizeof(char *));
	chosen_instructions[0] = 0;
	t_solution solution;
	solution.chosen_instructions = chosen_instructions;
	solution.nb_instuctions = 10;
	ft_get_solutions(a, instructions_set, instructions, 0, &solution);
	for (int i = 0; solution.chosen_instructions[i]; i++)
		printf("%s\n", solution.chosen_instructions[i]);
	return (0);
}
