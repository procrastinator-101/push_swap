/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve_atomic_case.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:55:48 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 20:00:57 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_solution	*ft_solve_atomic_case(t_case *node)
{
	int			max_depth;
	t_stack		*stack;
	t_solution	*ret;

	max_depth = MAX_DEPTH;
	stack = ft_arr_to_stack(node->arr, node->size);
	if (!stack)
		return (0);
	ret = ft_backtrack_atomic_case(stack, 0, 0, &max_depth);
	ft_destroy_stack(&stack);
	return (ret);
}
