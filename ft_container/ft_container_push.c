/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:06:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 22:49:53 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

int	ft_container_push(t_container *container, int value, int ischunk)
{
	int	ret;

	ret = ft_stack_push(container->stack, value);
	if (ret)
		return (ret);
	if (!container->chunks)
		container->chunks = ft_pair_create(0, container->stack->end);
	else if (ischunk)
		ft_pair_pushback(&(container->chunks), container->stack->end - 1, \
			container->stack->end);
	else
		container->chunks->previous->second = container->stack->end;
	if (!container->chunks)
		return (1);//EMAF
	return (0);
}
