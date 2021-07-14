/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printsolutions_intersections.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 17:50:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/14 18:33:44 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_printsolutions_intersections(t_case *cases)
{
	t_case		*head1;
	t_case		*head2;
	t_solution	*solution;

	head1 = cases;
	while (head1)
	{
		head2 = cases;
		while (head2)
		{
			solution = ft_solution_intersect(head1->solutions, \
				head2->solutions);
			ft_solution_print(solution);
			ft_solution_del(solution);
			head2 = head2->next;
		}
		head1 = head1->next;
	}
}
