/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_atomic_solutions.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 15:30:36 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/01 17:04:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static	int	ft_get_number_to_permute(t_stack *stack, t_stack *dst, int index)
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

int	ft_get_atomic_solutions(t_solution *solutions, t_stack *src, t_stack *dst, \
	int index)
{
	int			i;
	int			ret;
	t_solution	*solution;

	if (index == src->size)
	{
		solution = ft_solve_case(solution, *dst, 0);
		if (!solution)
		{
			ft_destroy_lst_solution(solutions);
			return (0);
		}
		ft_add_lst_solution(solutions, solution);
		return (1);
	}
	i = index - 1;
	while (i++ < src->size)
	{
		dst->content[index] = ft_get_number_to_permute(src, dst, index);
		ret = ft_get_cases_solutions(solutions, nums, dst, i + 1);
		if (!ret)
			return (0);
	}
	return (1);
}
