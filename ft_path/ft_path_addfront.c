/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_addfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:55 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:55:55 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_addfront(t_path **tail, t_path *node)
{
	if (!*tail)
	{
		*tail = node;
		return ;
	}
	node->next = *tail;
	*tail = node;
}
