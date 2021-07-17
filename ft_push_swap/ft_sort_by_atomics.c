/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_by_atomics.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:30:22 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 12:39:08 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_sort_by_atomics(t_container *a, t_container *b, t_case *atomics)
{
	t_case		*state1;
	t_case		*state2;
	t_solution	*solution;

	state1 = ft_find_case(a);
	state2 = ft_find_case(b);
	solution = ft_solution_intersect(state1, state2);
	ft_solution_print(solution);
	ft_solution_del(solution);
	return (0);
}
