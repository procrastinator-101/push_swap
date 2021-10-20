/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/20 15:15:20 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_case		*cases;
	t_container	*a;
	t_container	*b;

	a = ft_initialise_container('a');
	if (!a)
		ft_manage_execution_error(0, 0, EMAF);//to update
	b = ft_initialise_container('b');
	if (!b)
	{
		ft_container_del(a);
		ft_manage_execution_error(0, 0, EMAF);//to update
	}
	ft_parse_arguments(a->stack, 1, argc, argv);//check errors
	a->chunks = ft_pair_create(0, a->stack->end);//to protect
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(0, 0, EMAF);//to update
	cases = ft_getatomic_solutions(cases);
	ft_sort(a, b, cases);
	ft_container_del(a);
	ft_container_del(b);
	ft_case_clear(&cases);
	return (0);
}
