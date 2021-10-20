/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:25:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 19:47:50 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_print(t_solution *tail)
{
	t_solution	*head;

	head = tail;
	while (head)
	{
		printf("==========================================\n");
		printf("nb_steps = %d\n", head->nb_steps);
		ft_path_print(head->path);
		head = head->next;
		printf("==========================================\n");
	}
}
