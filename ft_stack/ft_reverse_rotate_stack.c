/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_stack.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:16:31 by youness           #+#    #+#             */
/*   Updated: 2021/05/02 15:48:36 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_reverse_rotate_stack(t_stack *stack)
{
	int	i;
	int	tmp;

	if (!stack->size)
		return ;
	tmp = stack->content[0];
	i = -1;
	while (++i < stack->size - 1)
		stack->content[i] = stack->content[i + 1];
	stack->content[stack->size - 1] = tmp;
}
