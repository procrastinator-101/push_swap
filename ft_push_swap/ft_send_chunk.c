/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:33:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 16:05:24 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_manage_chunksending(t_container *src, t_container *dst, char \
			name, int middle_cost)
{
	int	ret;

	if (name == 'a')
	{
		ret = ft_repeate_instruction(src->stack, dst->stack, middle_cost, "ra");
		if (ret)
			return (ret);
		ret = ft_execute_intruction(src->stack, dst->stack, "pb");
		printf("pb\n");
	}
	else
	{
		ret = ft_repeate_instruction(dst->stack, src->stack, middle_cost, "rb");
		if (ret)
			return (ret);
		ret = ft_execute_intruction(dst->stack, src->stack, "pa");
		printf("pa\n");
	}
	return (ret);
}

int	ft_send_chunk(t_container *src, t_container *dst, char name, int median)
{
	int		ret;
	int		end;
	int		middle_cost;
	t_pair	*upper_chunk;

	ret = 0;
	middle_cost = 0;
	upper_chunk = src->chunks->previous;
	end = upper_chunk->second - 1;
	printf("end = %d\n", end);
	printf("start = %d\n", upper_chunk->first);
	while (end >= upper_chunk->first)
	{
		if (ft_isforeign(src->stack->data[end], name, median))
		{
			printf("num = %d\n", src->stack->data[end]);
			ft_manage_chunksending(src, dst, name, middle_cost);
			ret += middle_cost;
			middle_cost = 0;
		}
		else
			middle_cost++;
		end--;
	}
	printf("ret = %d\n", ret);
	if (name == 'a')
		ret = ft_repeate_instruction(src->stack, dst->stack, ret, "rra");
	else
		ret = ft_repeate_instruction(dst->stack, src->stack, ret, "rrb");
	return (ret);
}
