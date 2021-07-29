/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:33:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 22:56:15 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_manage_chunksending(t_container *src, t_container *dst, int \
			middle_cost, int ischunk)
{
	int	ret;

	if (src->name == 'a')
	{
		ret = ft_repeate_instruction(src->stack, dst->stack, middle_cost, "ra");
		if (ret)
			return (ret);
		ret = ft_container_push(dst, ft_container_pop(src), ischunk);
		printf("pb\n");
	}
	else
	{
		ret = ft_repeate_instruction(dst->stack, src->stack, middle_cost, "rb");
		if (ret)
			return (ret);
		ret = ft_container_push(src, ft_container_pop(dst), ischunk);
		printf("pa\n");
	}
	return (ret);
}

static int	ft_reset_chunk(t_container *src, t_container *dst, int ret)
{
	if (src->chunks->next)
	{
		if (src->name == 'a')
			ret = ft_repeate_instruction(src->stack, dst->stack, ret, "rra");
		else
			ret = ft_repeate_instruction(dst->stack, src->stack, ret, "rrb");
	}
	return (ret);
}

int	ft_send_chunk(t_container *src, t_container *dst, int median)
{
	int		ret;
	int		end;
	int		start;
	int		error;
	int		ischunk;
	int		middle_cost;

	ret = 0;
	error = 0;
	ischunk = 1;
	middle_cost = 0;
	end = src->chunks->previous->second - 1;
	start = src->chunks->previous->first;
	/*
	printf("\n------------------- enter ------------------\n");
	printf("name = %c\n", name);
	ft_container_print(src);
	ft_container_print(dst);
	printf("\n------------------- enter ------------------\n");
	*/
	while (end >= start)
	{
		if (ft_isforeign(src->stack->data[end], src->name, median))
		{
			error = ft_manage_chunksending(src, dst, middle_cost, ischunk);
			if (error)
				return (error);
			end += middle_cost;
			start += middle_cost;
			ret += middle_cost;
			middle_cost = 0;
			ischunk = 0;
		}
		else
			middle_cost++;
		end--;
	}
	return (ft_reset_chunk(src, dst, ret));
}
