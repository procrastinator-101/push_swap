/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/29 12:28:42 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	int			error;
	t_stack		*stack;
	t_case		*cases;
	t_container	*a;
	t_container	*b;

	if (argc < 2)
		return (0);
	stack = ft_stack_create();
	if (!stack)
		ft_manage_parsing_error(stack, EMAF);
	ft_parse_arguments(stack, 1, argc, argv);
	a = ft_container_create(stack, 0, 'a');
	if (!a)
		ft_manage_parsing_error(stack, EMAF);
	b = ft_initialise_container('b');
	if (!b)
		ft_manage_execution_error(a, b, EMAF);
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(a, b, EMAF);
	cases = ft_getatomic_solutions(cases);
	if (!cases)
		ft_manage_execution_error(a, b, EMAF);
	error = ft_sort(a, b, cases);
	ft_container_del(a);
	ft_container_del(b);
	ft_case_clear(&cases);
	if (error)
		ft_manage_execution_error(0, 0, error);
	return (0);
}
