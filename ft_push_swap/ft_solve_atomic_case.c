/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_atomic_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:55:48 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/02 20:32:01 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_solve_atomic_case(t_case *node)
{
	int			ret;
	t_stack		*stack;

	if (node->size == 2)
		node->max_pathsteps = 2;
	else if (node->size == 3)
		node->max_pathsteps = 3;
	else if (node->size == 4)
		node->max_pathsteps = 7;
	else
		node->max_pathsteps = MAX_DEPTH;
	stack = ft_arr_to_stack(node->arr, node->size);
	if (!stack)
		return (0);
	ret = ft_backtrack_atomic_case(stack, 0, node, 0);
	ft_destroy_stack(&stack);
	return (ret);
}
