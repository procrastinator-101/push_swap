/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:57:47 by yarroubi          #+#    #+#             */
/*   Updated: 2021/11/04 15:35:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_sort_biatomics(t_container *a, t_container *b, t_case *atomics, \
			int size)
{
	int	i;
	int	ret;

	ret = ft_sort_by_atomics(a, b, atomics);
	if (ret)
		return (ret);
	i = -1;
	while (++i < size)
	{
		ret = ft_container_push(a, ft_container_pop(b), !i);
		if (ret)
			return (ret);
		printf("pa\n");
	}
	return (0);
}

static int	ft_sort_uniatomics(t_container *a, t_container *b, t_case *atomics)
{
	int	size;

	if (b->chunks)
	{
		size = b->chunks->previous->second - b->chunks->previous->first;
		if (size <= ATOMIC_SIZE)
			return (ft_sort_biatomics(a, b, atomics, size));
		else
			return (ft_chunkate(b, a));
	}
	return (ft_sort_by_atomics(a, b, atomics));
}

int	ft_sort(t_container *a, t_container *b, t_case *atomics)
{
	int	ret;
	int	size;

	while (!ft_stack_issorted(a->stack, ASCENDANT) || b->stack->end)
	{
		size = a->chunks->previous->second - a->chunks->previous->first;
		if (size <= ATOMIC_SIZE)
		{
			ret = ft_sort_uniatomics(a, b, atomics);
			if (ret)
				return (ret);
		}
		else
		{
			ret = ft_chunkate(a, b);
			if (ret)
				return (ret);
		}
	}
	return (0);
}
