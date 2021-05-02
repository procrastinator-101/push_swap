/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_atomic_solutions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:30:36 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 17:12:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	int	ft_get_number_to_permute(t_stack *src, t_stack *dst, int index)
{
	int	i;
	int	j;

	i = 0;
	while (i < src->size)
	{
		j = 0;
		while (j < index && j < dst->size)
		{
			if (dst->content[j] == src->content[i])
				break ;
			j++;
		}
		if (j < index && j < dst->size)
			return (src->content[i]);
		i++;
	}
	return (src->content[src->size - 1]);
}

t_solution	*ft_solve_atomic_cases(t_solution *solutions, t_stack *src, \
			t_stack *dst, int index)
{
	int			i;
	t_solution	*solution;

	if (index == src->size)
	{
		solution = ft_get_case_solution(dst);
		if (!solution)
		{
			ft_destroy_lst_solution(&solutions);
			return (0);
		}
		ft_add_front_lst_solution(&solutions, solution);
		return (solutions);
	}
	i = index - 1;
	while (i++ < src->size)
	{
		dst->content[index] = ft_get_number_to_permute(src, dst, index);
		solutions = ft_solve_atomic_cases(solutions, src, dst, i + 1);
		if (!solutions)
			return (0);
	}
	return (solutions);
}

t_solution	*ft_get_atomic_solutions(t_stack *src)
{
	t_stack		*dst;
	t_solution	*solutions;

	dst = ft_duplicate_stack(src);
	if (!dst)
		return (0);
	solutions = ft_solve_atomic_cases(NULL, src, dst, 0);
	if (!solutions)
		ft_destroy_stack(&dst);
	return (solutions);
}
