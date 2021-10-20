/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 07:57:47 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 23:06:20 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_sort_atomic_stacks(t_container *a, t_container *b, \
			t_case *atomics)
{
	int	i;
	int	ret;
	int	size;

	if (b->chunks)
	{
		size = b->chunks->previous->second - b->chunks->previous->first;
		if (size <= ATOMIC_SIZE)
		{
			ft_sort_by_atomics(a, b, atomics);
			i = -1;
			while (++i < size)
			{
				ret = ft_container_push(a, ft_container_pop(b), !i);
				if (ret)
					return (ret);
				printf("pa\n");
			}
		}
		else
			ft_chunkate(b, a);
	}
	else
		ft_sort_by_atomics(a, b, atomics);
	return (0);
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
			ret = ft_sort_atomic_stacks(a, b, atomics);
			if (ret)
				return (ret);
		}
		else
			ft_chunkate(a, b);
	}
	return (0);
}
