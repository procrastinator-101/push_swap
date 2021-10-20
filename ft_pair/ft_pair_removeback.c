/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_removeback.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:59:58 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 11:09:40 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pair.h"

void	ft_pair_removeback(t_pair **tail)
{
	t_pair	*head;

	if (!*tail)
		return ;
	head = *tail;
	if (!head->next)
	{
		ft_pair_del(head);
		*tail = 0;
		return ;
	}
	while (head->next->next)
		head = head->next;
	ft_pair_del(head->next);
	head->next = 0;
	(*tail)->previous = head;
}
