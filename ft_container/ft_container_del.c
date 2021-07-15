/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container_del.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:58:56 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 11:01:20 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_container.h"

void	ft_container_del(t_container *node)
{
	if (!node)
		return ;
	ft_stack_clear(&(node->stack));
	ft_pair_clear(&(node->chunks));
	free(node);
}
