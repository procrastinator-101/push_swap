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

int	ft_sort(t_container *a, t_container *b, t_case *atomics)
{
	int	i;
	int	ret;
	int	size;

	while (!ft_stack_issorted(a->stack, ASCENDANT) || b->stack->end)
	{
		printf("\n++++++++++++++++++++++++++++ begin iter ++++++++++++++++++++++++++++++\n");
		ft_container_print(a);
		ft_container_print(b);
		printf("\n++++++++++++++++++++++++++++ begin iter ++++++++++++++++++++++++++++++\n");
		size = a->chunks->previous->second - a->chunks->previous->first;
		if (size <= ATOMIC_SIZE)
		{
			if (b->chunks)
			{
				size = b->chunks->previous->second - b->chunks->previous->first;
				if (size <= ATOMIC_SIZE)
				{
					printf("\n************* atomics **************\n");
					ft_sort_by_atomics(a, b, atomics);
					printf("\n************* atomics **************\n");
					printf("size = %d\n", size);
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
		}
		else
			ft_chunkate(a, b);
	}
	return (0);
}
