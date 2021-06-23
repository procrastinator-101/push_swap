/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:25:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 20:01:40 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_print(t_solution *tail)
{
	t_solution	*head;

	head = tail;
	while (head)
	{
		ft_path_print(head->path);
		head = head->next;
	}
}
