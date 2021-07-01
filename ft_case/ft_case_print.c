/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:11:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 19:48:44 by yarroubi         ###   ########.fr       */
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
		printf("\n");
		ft_solution_print(head->solutions);
		head = head->next;
		printf("IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII\n");
	}
}
