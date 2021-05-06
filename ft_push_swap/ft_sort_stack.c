/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 11:02:35 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 20:50:04 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_sort_stack(t_stack *src, t_stack *dst, int template, int size)
{
	if (size <= 4)
	{
		if (template)
		{
			if (src->content[src->size - 1] > src->content[src->size - 2])
			{
				if (dst == src)
					return ;
				return ;
			}
		}
	}
}
