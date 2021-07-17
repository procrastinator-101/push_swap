/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_pop.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 10:18:23 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 10:41:51 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

int	ft_container_pop(t_container *container)
{
	int	ret;

	ret = ft_stack_pop(container->stack);
	if (!container->stack->end)
		ft_
}
