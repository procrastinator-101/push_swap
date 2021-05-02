/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:13:19 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 17:12:28 by yarroubi         ###   ########.fr       */
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
		ft_manage_error(EMAF);
	b = ft_construct_stack();
	if (!b)
	{
		ft_destroy_stack(a);
		ft_manage_error(EMAF);
	}
	fill_stack(&a, 1, argc, argv);			//to recode
	ft_verbose(&a, &b, 0);
	solutions = ft_get_atomic_solutions(a);
	if (!solutions)
	{
		ft_destroy_stack(a);
		ft_destroy_stack(b);
		ft_manage_error(EMAF);
	}
	//ft_sort_stack(a, b, solutions);
	return (0);
}
