/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_solution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 21:46:42 by youness           #+#    #+#             */
/*   Updated: 2021/05/06 00:07:09 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_solution(t_solution *solution)
{
	t_list	*path;
	t_list	*paths;

	printf("\n");
	printf("===============================================================\n");
	printf("nb_instuctions = %d\n", solution->nb_instuctions);
	ft_print_stack(solution->stack);
	paths = solution->paths;
	while (paths)
	{
		path = paths->content;
		printf("----------------------------------------------------------\n");
		while (path)
		{
			printf("%s\n", (char *)path->content);
			path = path->next;
		}
		printf("----------------------------------------------------------\n");
		paths = paths->next;
	}
	printf("===============================================================\n");
}
