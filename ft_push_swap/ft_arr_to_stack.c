/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_to_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:47:09 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 14:25:40 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_stack	*ft_arr_to_stack(int *arr, int size)
{
	int		i;
	int		error;
	t_stack	*stack;

	stack = ft_construct_stack();
	if (!stack)
		return (0);
	i = -1;
	while (++i < size)
	{
		error = ft_push(stack, arr[i]);
		if (error)
			return (0);
	}
	return (stack);
}
