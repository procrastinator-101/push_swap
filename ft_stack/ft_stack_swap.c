/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:54:51 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 21:38:27 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_swap(t_stack *stack)
{
	if (stack->end < 2)
		return ;
	ft_iswap(stack->data + stack->end, stack->data + stack->end - 1);
}
