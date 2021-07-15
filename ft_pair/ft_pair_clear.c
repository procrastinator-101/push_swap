/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:02:47 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:49:58 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pair.h"

void	ft_pair_clear(t_pair **tail)
{
	t_pair	*head;
	t_pair	*next;

	head = *tail;
	while (head)
	{
		next = head->next;
		ft_pair_del(head);
		head = next;
	}
	*tail = 0;
}
