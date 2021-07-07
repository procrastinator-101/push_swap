/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/07 19:38:53 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_case		*cases;
	t_stack		*a;
	t_stack		*b;
	//t_case		*head1;
	//t_case		*head2;
	//t_solution	*solution;

	
	a = ft_construct_stack();
	b = ft_construct_stack();
	ft_parse_arguments(a, 1, argc, argv);
	ft_print_stack(a);
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(a, b, EMAF);
	cases = ft_getatomic_solutions(cases);
	/*
	head1 = cases;
	while (head1)
	{
		head2 = cases;
		while (head2)
		{
			solution = ft_solution_intersect(head1->solutions, head2->solutions);
			ft_solution_print(solution);
			ft_solution_del(solution);
			head2 = head2->next;
		}
		break ;
		head1 = head1->next;
	}
	*/
	ft_case_clear(&cases);
	return (0);
}
