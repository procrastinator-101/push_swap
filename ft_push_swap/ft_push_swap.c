/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 13:46:57 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_case		*cases;
	t_stack		*a;
	t_stack		*b;

	a = ft_stack_create();
	b = ft_stack_create();
	ft_parse_arguments(a, 1, argc, argv);
	ft_stack_print(a);
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(a, b, EMAF);
	cases = ft_getatomic_solutions(cases);
	//ft_printsolutions_intersections(cases);
	ft_case_clear(&cases);
	return (0);
}
