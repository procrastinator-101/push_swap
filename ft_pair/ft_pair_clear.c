/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:02:47 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:20:24 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_pair.h"

void	ft_pair_clear(t_pair **tail)
{
	t_pair	*head;
	t_pair	*next;

	if (!*tail)
		return ;
	head = *tail;
	while (head->next != *tail)
	{
		next = head->next;
		ft_pair_del(head);
		head = next;
	}
	ft_pair_del(head);
	*tail = 0;
}
