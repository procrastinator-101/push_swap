/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_addback.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:02:16 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:03:36 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_addback(t_case **tail, t_case *node)
{
	t_cmd	*head;

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
