/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcost_lower.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:04:55 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 12:44:01 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_getcost_lower(t_container *src, char name, int median)
{
	int		ret;
	int		half;
	int		start;
	t_pair	*upper_chunk;

	ret = 0;
	upper_chunk = src->chunks->previous;
	start = upper_chunk->first;
	half = start + (upper_chunk->second - start) / 2;
	while (start < half)
	{
		if (ft_isforeign(src->stack->data[start], name, median))
			ret = start;
		start++;
	}
	if (upper_chunk->previous != upper_chunk)
		ret *= 2;
	return (ret);
}
