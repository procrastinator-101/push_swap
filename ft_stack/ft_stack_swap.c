/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:54:51 by youness           #+#    #+#             */
/*   Updated: 2021/07/15 15:46:33 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_stack_swap(t_stack *stack)
{
	if (stack->end < 2)
		return ;
	ft_iswap(stack->data + stack->end - 1, stack->data + stack->end - 2);
}
