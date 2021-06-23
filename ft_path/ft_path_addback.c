/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_addback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:55 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:55:55 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_addback(t_path **tail, t_path *node)
{
	t_path	*head;

	if (!*tail)
	{
		*tail = node;
		return ;
	}
	head = *tail;
	while (head->next)
		head = head->next;
	head->next = node;
}
