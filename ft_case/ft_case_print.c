/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:11:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:14:43 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_print(t_case *tail)
{
	t_case	*head;

	head = tail;
	while (head)
	{
		i = -1;
		while (++i < head->size)
		{
			printf("%d", head->arr[i]);
			if (i < head->size - 1)
				printf(" ");
		}
		printf("\n");
		ft_solution_print(head->solutions);
		head = head->next;
	}
}
