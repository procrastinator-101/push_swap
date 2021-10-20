/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_print.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 11:01:28 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 11:03:00 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

void	ft_container_print(t_container *node)
{
	if (!node)
		return ;
	printf("\n===================== CONTAINER %c ", ft_toupper(node->name));
	printf("=====================\n");
	ft_stack_print(node->stack);
	ft_pair_print(node->chunks);
	printf("\n=======================================================\n");
}
