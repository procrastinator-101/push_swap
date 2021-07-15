/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:57:43 by youness           #+#    #+#             */
/*   Updated: 2021/07/15 15:48:16 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_rotate(t_stack *stack)
{
	int	i;
	int	tmp;

	if (!stack->end)
		return ;
	tmp = stack->data[stack->end - 1];
	i = stack->end;
	while (--i > 0)
		stack->data[i] = stack->data[i - 1];
	stack->data[0] = tmp;
}
