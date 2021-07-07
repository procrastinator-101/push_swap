/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_pop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:49:02 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 21:37:44 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

int	ft_stack_pop(t_stack *stack)
{
	int	ret;

	ret = stack->data[stack->end--];
	if (!stack->end)
	{
		free(stack->data);
		stack->data = 0;
		stack->size = 0;
	}
	return (ret);
}
