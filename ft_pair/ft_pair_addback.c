/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_addback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:58:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:38:47 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pair.h"

void	ft_pair_addback(t_pair **tail, t_pair *node)
{
	t_pair	*head;

	head = node;
	if (!*tail)
		*tail = node;
	else
	{
		head = *tail;
		while (head->next)
			head = head->next;
		head->next = node;
	}
	node->previous = head;
}
