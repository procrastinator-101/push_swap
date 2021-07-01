/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_remove_if.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:00:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 13:07:10 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_remove_if(t_solution **tail, int (*fun)(void *, void *), \
		void *arg)
{
	t_solution	*head;
	t_solution	*next;
	t_solution	*previous;

	head = *tail;
	previous = 0;
	while (head)
	{
		next = head->next;
		if (fun(head, arg))
		{
			if (head == *tail)
				*tail = next;
			ft_solution_del(head);
			if (previous)
				previous->next = next;
		}
		else
			previous = head;
		head = next;
	}
}
