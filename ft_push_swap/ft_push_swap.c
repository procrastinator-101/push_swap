/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:39:43 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_case	*cases;

	a = ft_construct_stack();
	b = ft_construct_stack();
	ft_parse_arguments(a, 1, argc, argv);
	ft_print_stack(a);
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(a, b, EMAF);
	ft_case_print(cases);
	return (0);
}
