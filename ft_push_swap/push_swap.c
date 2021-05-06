/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:13:19 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 21:27:28 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*a;
	t_stack		*b;
	t_solution	*solutions;

	if (argc < 2)
		return (0);
	a = ft_construct_stack();
	if (!a)
		ft_manage_execution_error(a, NULL, EMAF);
	b = ft_construct_stack();
	if (!b)
		ft_manage_execution_error(a, b, EMAF);
	ft_parse_arguments(a, 1, argc, argv);
	ft_verbose(a, b, 0);
	solutions = ft_get_case_solution(a);
	if (!solutions)
		ft_manage_execution_error(a, b, EMAF);
	/*
	solutions = ft_get_atomic_solutions(a);
	if (!solutions)
		ft_manage_execution_error(a, b, EMAF);
	*/
	//ft_sort_stack(a, b, solutions);
	return (0);
}
