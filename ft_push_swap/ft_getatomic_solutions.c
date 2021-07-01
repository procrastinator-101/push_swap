/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getatomic_solutions.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:23:28 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 15:12:00 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_case	*ft_getatomic_solutions(t_case *cases)
{
	t_case	*head;

	head = cases;
	while (head)
	{
		head->solutions = ft_solve_atomic_case(head);
		if (!head->solutions)
		{
			ft_case_clear(&cases);
			return (0);
		}
		head = head->next;
	}
	return (cases);
}
