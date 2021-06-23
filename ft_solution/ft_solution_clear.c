/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_clear.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:25:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:25:26 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_clear(t_solution **tail)
{
	t_solution	*head;
	t_solution	*next;

	head = *tail;
	while (head)
	{
		next = head->next;
		ft_solution_del(head, del);
		head = next;
	}
	*tail = 0;
}
