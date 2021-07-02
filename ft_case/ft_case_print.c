/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:11:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/02 20:23:59 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_print(t_case *tail)
{
	int		i;
	t_case	*head;

	head = tail;
	printf("\n\n");
	while (head)
	{
		printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
		i = -1;
		while (++i < head->size)
		{
			printf("%d", head->arr[i]);
			if (i < head->size - 1)
				printf(" ");
		}
		printf("\nmax_pathsteps : %d\n", head->max_pathsteps);
		ft_solution_print(head->solutions);
		head = head->next;
		printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n\n");
	}
}
