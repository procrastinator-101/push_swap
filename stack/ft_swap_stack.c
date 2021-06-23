/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:10:35 by youness           #+#    #+#             */
/*   Updated: 2021/03/20 00:25:21 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_swap_stack(t_stack *stack)
{
	int	tmp;

	if (stack->size < 2)
		return ;
	tmp = stack->content[stack->size - 1];
	stack->content[stack->size - 1] = stack->content[stack->size - 2];
	stack->content[stack->size - 2] = tmp;
}
