/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_case.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:31:42 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 18:33:34 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_solve_case(t_solution *solution, t_stack *src, t_list *path, \
			int nb_instuctions)
{
	int		i;
	int		ret;
	t_stack	*tmp;

	if (ft_is_stack_sorted(src, ASCENDANT))
	{
		if (solution->nb_instuctions >= nb_instuctions)
		{
			if (solution->nb_instuctions > nb_instuctions)
				ft_destroy_paths(&(solution->paths));
			ft_lstadd_front(&(solution->paths), path);
			solution->nb_instuctions = nb_instuctions;
		}
		return (0);
	}
	if (nb_instuctions > solution->nb_instuctions)
		return (0);
	i = -1;
	while (++i < 3)
	{
		ret = 0;
		tmp = ft_duplicate_stack(src);
		if (!tmp)
			return (1);
		ft_add_next_step(&path, tmp, i);
		if (path)
			ret = ft_solve_case(solution, tmp, path, nb_instuctions + 1);
		ft_destroy_stack(&tmp);
		ft_lstdel_back(&path);
		if (!path || ret)
			return (1);
	}
	return (0);
}

t_solution	*ft_get_case_solution(t_stack *src)
{
	int			ret;
	t_solution	*solution;

	solution = malloc(sizeof(t_solution));
	if (!solution)
		return (0);
	solution->stack = ft_duplicate_stack(src);
	if (!solution->stack)
	{
		free(solution);
		return (0);
	}
	solution->paths = NULL;
	solution->nb_instuctions = MAX_INSTRUCTIONS;
	ret = ft_solve_case(solution, src, NULL, 0);
	if (ret)
		ft_delete_lst_solution(&solution);
	return (solution);
}
