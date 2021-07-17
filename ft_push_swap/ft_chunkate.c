/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chunkate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 08:50:16 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 16:09:26 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_chunkate(t_container *a, t_container *b, char name)
{
	int			end;
	int			start;
	int			error;
	int			median;
	t_container	*src;

	src = a;
	if (name == 'b')
		src = b;
	if (!src->chunks || !src->stack->end)
		return (-1);//use macro
	start = src->chunks->previous->first;
	end = src->chunks->previous->second;
	median = ft_median(src->stack->data + start, end - start, &error);
	if (error)
		return (error);
	if (name == 'a')
		return (ft_send_chunk(a, b, name, median));
	return (ft_send_chunk(b, a, name, median));
}
