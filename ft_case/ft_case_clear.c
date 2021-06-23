/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:04:58 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:05:58 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_clear(t_case **tail)
{
	t_case	*head;
	t_case	*next;

	head = *tail;
	while (head)
	{
		next = head->next;
		ft_case_del(head, del);
		head = next;
	}
	*tail = 0;
}
