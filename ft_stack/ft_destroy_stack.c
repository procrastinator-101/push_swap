/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 00:28:23 by youness           #+#    #+#             */
/*   Updated: 2021/05/05 17:39:51 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

void	ft_destroy_stack(t_stack **stack)
{
	if (!*stack)
		return ;
	free((*stack)->content);
	free(*stack);
	*stack = 0;
}
