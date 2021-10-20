/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:59:27 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 20:59:59 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_reverse_rotate(t_stack *stack)
{
	int	i;
	int	tmp;

	if (!stack->end)
		return ;
	tmp = stack->data[0];
	i = -1;
	while (++i < stack->end - 1)
		stack->data[i] = stack->data[i + 1];
	stack->data[stack->end - 1] = tmp;
}
