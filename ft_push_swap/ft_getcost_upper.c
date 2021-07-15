/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcost_upper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:38:54 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 12:44:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_getcost_upper(t_container *src, char name, int median)
{
	int		ret;
	int		end;
	int		half;
	t_pair	*upper_chunk;

	ret = 0;
	upper_chunk = src->chunks->previous;
	end = upper_chunk->second;
	half = upper_chunk->first + (end - upper_chunk->first) / 2;
	while (end >= half)
	{
		if (ft_isforeign(src->stack->data[end], name, median))
			ret = end;
		end--;
	}
	return (upper_chunk->end - ret);
}
