/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_removeback.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:31:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 11:33:50 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_removeback(t_path **tail)
{
	t_path	*head;

	if (!*tail)
		return ;
	head = *tail;
	while (head->next)
		head = head->next;
	ft_path_del(head->next);
	head->next = 0;
}
