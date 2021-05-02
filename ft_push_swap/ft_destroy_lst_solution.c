/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_lst_solution.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:03:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 16:22:14 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_destroy_lst_solution(t_solution **solution)
{
	t_solution	*head;
	t_solution	*next;

	head = *solution;
	while (head)
	{
		next = head->next;
		ft_delete_lst_solution(&head);
		head = next;
	}
	*solution = 0;
}
