/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_remove_shadows.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 19:36:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/02 20:15:50 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_remove_shadows(t_solution **tail, int nb_steps)
{
	t_solution	*head;
	t_solution	*next;
	t_solution	*previous;

	head = *tail;
	previous = 0;
	while (head)
	{
		next = head->next;
		if (head->nb_steps > nb_steps || !head->path)
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
