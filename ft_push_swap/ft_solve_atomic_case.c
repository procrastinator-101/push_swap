/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_atomic_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:55:48 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/31 19:58:35 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_solve_atomic_case(t_case *node)
{
	int			ret;
	t_stack		*stack;

	if (node->size == 2)
		node->max_pathsteps = 1;
	else if (node->size == 3)
		node->max_pathsteps = 5;
	else if (node->size == 4)
		node->max_pathsteps = 12;
	else
		node->max_pathsteps = MAX_DEPTH;
	stack = ft_arr_to_stack(node->arr, node->size);
	if (!stack)
		return (EMAF);
	ret = ft_backtrack_atomic_case(stack, 0, node, 0);
	ft_stack_clear(&stack);
	return (ret);
}
