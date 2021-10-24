/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:43:37 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 17:34:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_push(t_stack *stack, int value)
{
	int	*ptr;

	if (stack->end >= stack->size)
	{
		if (stack->size)
			stack->size *= 2;
		else
			stack->size = MIN_STACK_SIZE;
		ptr = malloc(stack->size * sizeof(int));
		if (!ptr)
		{
			ft_stack_clear(&stack);
			return (1);
		}
		ft_memcpy(ptr, stack->data, stack->end * sizeof(int));
		free(stack->data);
		stack->data = ptr;
	}
	stack->data[stack->end++] = value;
	return (0);
}
