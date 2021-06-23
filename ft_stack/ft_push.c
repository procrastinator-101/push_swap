/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:52:14 by youness           #+#    #+#             */
/*   Updated: 2021/05/02 15:48:06 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_push(t_stack *stack, int value)
{
	int	i;
	int	*ptr;

	if (stack->size % MIN_STACK_SIZE)
		stack->content[stack->size] = value;
	else
	{
		ptr = malloc((stack->size + MIN_STACK_SIZE) * sizeof(int));
		if (!ptr)
		{
			free(stack->content);
			return (-1);
		}
		i = -1;
		while (++i < stack->size)
			ptr[i] = stack->content[i];
		ptr[i] = value;
		free(stack->content);
		stack->content = ptr;
	}
	stack->size++;
	return (0);
}
