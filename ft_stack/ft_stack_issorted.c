/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_issorted.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 21:01:28 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 17:52:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_issorted(t_stack *stack, int order)
{
	int	i;

	i = -1;
	if (order == DESCENDANT)
	{
		while (++i < stack->end - 1)
		{
			if (stack->data[i] > stack->data[i + 1])
				return (0);
		}
	}
	else
	{
		while (++i < stack->end - 1)
		{
			if (stack->data[i] < stack->data[i + 1])
				return (0);
		}
	}
	return (1);
}
