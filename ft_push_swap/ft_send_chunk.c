/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_chunk.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:33:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/11/04 16:22:01 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_manage_chunksending(t_container *src, t_container *dst, \
			int middle_cost, int ischunk)
{
	int	ret;

	ret = 0;
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
		ret = ft_container_push(dst, ft_container_pop(src), ischunk);
		printf("pa\n");
	}
	return (ret);
}

static int	ft_reset_chunk(t_container *src, t_container *dst, int ret)
{
	if (src->chunks && src->chunks->next)
	{
		if (src->name == 'a')
			ret = ft_repeate_instruction(src->stack, dst->stack, ret, "rra");
		else
			ret = ft_repeate_instruction(dst->stack, src->stack, ret, "rrb");
	}
	return (ret);
}

static int	ft_send_batch(t_container *src, t_container *dst, int median, \
			t_data *data)
{
	int	error;

	if (ft_isforeign(src->stack->data[data->end], src->name, median))
	{
		error = ft_manage_chunksending(src, dst, data->middle_cost, \
			data->ischunk);
		if (error)
			return (error);
		data->end += data->middle_cost;
		data->start += data->middle_cost;
		data->ret += data->middle_cost;
		data->middle_cost = 0;
		data->ischunk = 0;
	}
	else
		data->middle_cost++;
	data->end--;
	return (0);
}

int	ft_send_chunk(t_container *src, t_container *dst, int median)
{
	int		error;
	t_data	data;

	data.ret = 0;
	data.ischunk = 1;
	data.middle_cost = 0;
	data.end = src->chunks->previous->second - 1;
	data.start = src->chunks->previous->first;
	while (data.end >= data.start)
	{
		error = ft_send_batch(src, dst, median, &data);
		if (error)
			return (error);
	}
	return (ft_reset_chunk(src, dst, data.ret));
}
