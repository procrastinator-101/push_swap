/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:28:23 by youness           #+#    #+#             */
/*   Updated: 2021/05/02 16:43:46 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_destroy_stack(t_stack **stack)
{
	if (!(*stack))
		return ;
	free((*stack)->content);
	free(*stack);
	*stack = 0;
}
