/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_container.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 14:55:16 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 14:58:09 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_container	*ft_initialise_container(void)
{
	t_container	*container;

	container = ft_container_create(0, 0);
	if (!container)
		return (0);
	container->stack = ft_stack_create();
	if (container->stack)
		return (container);
	free(container);
	return (0);
}
