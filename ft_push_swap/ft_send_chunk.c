/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:33:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 13:47:55 by yarroubi         ###   ########.fr       */
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
	}
	else
	{
		ret = ft_repeate_instruction(src->stack, dst->stack, middle_cost, "rb");
		if (ret)
			return (ret);
		ret = ft_execute_intruction(src->stack, dst->stack, "pa");
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
	upper_chunk = src->chunks->previous;
	end = upper_chunk->second;
	while (end >= upper_chunk->first)
	{
		if (ft_isforeign(src->stack->data[end], name, median))
		{
			ft_manage_chunksending(src, dst, name, middle_cost);
			ret += middle_cost;
			middle_cost = 0;
		}
		end--;
	}
	if (name == 'a')
		ret = ft_repeate_instruction(src->stack, dst->stack, ret, "rra");
	else
		ret = ft_repeate_instruction(src->stack, dst->stack, ret, "rrb");
	return (ret);
}
