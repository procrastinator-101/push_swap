/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_create.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:56:25 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 13:31:38 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

t_container	*ft_container_create(t_stack *stack, t_pair *chunks, char name)
{
	t_container	*container;

	container = malloc(sizeof(t_container));
	if (!container)
		return (0);
	container->name = name;
	container->stack = stack;
	container->chunks = chunks;
	if (!chunks && stack)
	{
		container->chunks = ft_pair_create(0, stack->end);
		if (!container->chunks)
		{
			free(container);
			return (0);
		}
	}
	return (container);
}
