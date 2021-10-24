/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:42:06 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 19:01:43 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = ft_stack_create();
	if (!a)
		ft_manage_execution_error(a, NULL, EMAF);
	ft_parse_arguments(a, 1, argc, argv);
	b = ft_stack_create();
	if (!b)
		ft_manage_execution_error(a, b, EMAF);
	parser(0, a, b);
	if (ft_stack_issorted(a, ASCENDANT) && !b->end)
		printf("Ok\n");
	else
		printf("Ko\n");
	return (0);
}
