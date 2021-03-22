/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:52:00 by youness           #+#    #+#             */
/*   Updated: 2021/03/20 00:30:39 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_pop(t_stack *stack)
{
	int	ret;

	ret = stack->content[stack->size - 1];
	stack->size--;
	if (!stack->size)
	{
		free(stack->content);
		stack->content = 0;
	}
	return (ret);
}
