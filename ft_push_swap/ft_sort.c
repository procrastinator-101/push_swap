/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:57:47 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 15:47:55 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_sort(t_pair *a, t_pair *b, t_case *atomics)
{
	int	ret;
	int	size;

	size = a->chunks->previous->second - a->chunks->previous->first;
	if (size <= ATOMIC_SIZE)
	{
		size = b->chunks->previous->second - b->chunks->previous->first;
		if (size <= ATOMIC_SIZE)
		{
			ft_sort_by_atomics(a, b, atomics);
			i = -1;
			while (++i < size)
			{
				ret = ft_container_push(a, ft_container_pop(b));
				if (ret)
					return (ret);
				return (0);
			}
		}
		ft_chunkate(b, a, 'b');
	}
	ft_chunkate(a, b, 'a');
	return (0);
}
