/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:10:49 by youness           #+#    #+#             */
/*   Updated: 2021/03/20 00:29:00 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_rotate_stack(t_stack *stack)
{
	int	i;
	int	tmp;

	if (!stack->size)
		return ;
	tmp = stack->content[stack->size - 1];
	i = stack->size;
	while (--i)
		stack->content[i] = stack->content[i - 1];
	stack->content[0] = tmp;
}
