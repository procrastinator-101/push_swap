/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:56 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:55:56 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_clear(t_path **tail)
{
	t_path	*head;
	t_path	*next;

	head = *tail;
	while (head)
	{
		next = head->next;
		ft_path_del(head);
		head = next;
	}
	*tail = 0;
}
