/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_stack_sorted.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:56:05 by youness           #+#    #+#             */
/*   Updated: 2021/05/02 15:47:26 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_is_stack_sorted(t_stack *stack, int order)
{
	int	i;

	i = -1;
	if (order == DESCENDANT)
	{
		while (++i < stack->size - 1)
		{
			if (stack->content[i] >= stack->content[i + 1])
				return (0);
		}
	}
	else
	{
		while (++i < stack->size - 1)
		{
			if (stack->content[i] <= stack->content[i + 1])
				return (0);
		}
	}
	return (1);
}
