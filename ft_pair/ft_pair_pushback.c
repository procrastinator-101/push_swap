/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 22:34:06 by youness           #+#    #+#             */
/*   Updated: 2021/07/28 22:36:42 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pair.h"

void	ft_pair_pushback(t_pair **pairs, int first, int second)
{
	t_pair	*node;

	node = ft_pair_create(first, second);
	if (!node)
		ft_pair_clear(pairs);
	else
		ft_pair_addback(pairs, node);
}
