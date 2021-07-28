/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_pop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:18:23 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 22:30:00 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

int	ft_container_pop(t_container *container)
{
	int		ret;

	ret = ft_stack_pop(container->stack);
	if (ret)
		return (ret);
	if (container->stack->end <= container->chunks->previous->first)
		ft_pair_removeback(&(container->chunks));
	return (0);
}
