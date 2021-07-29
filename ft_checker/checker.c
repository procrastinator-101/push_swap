/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:42:06 by youness           #+#    #+#             */
/*   Updated: 2021/07/29 20:59:37 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_stack	*a;
	t_stack	*b;

	if (argc < 2)
		return (0);
	a = ft_stack_create();
	if (!a)
		ft_manage_execution_error(a, NULL, EMAF);
	b = ft_stack_create();
	if (!b)
		ft_manage_execution_error(a, b, EMAF);
	ft_parse_arguments(a, 1, argc, argv);
	//ft_verbose(a, b, 0);
	fd = 0;
	parser(fd, a, b);
	if (ft_stack_issorted(a, ASCENDANT) && !b->end)
		printf("Ok\n");
	else
		printf("Ko\n");
	return (0);
}
