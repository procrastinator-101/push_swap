/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:42:06 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 21:17:24 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_stack	a;
	t_stack	b;

	if (argc < 2)
		return (0);
	fd = 0;
	construct_stack(&a);
	construct_stack(&b);
	fill_stack(&a, 1, argc, argv);
	ft_verbose(&a, &b);
	parser(fd, &a, &b);
	if (ft_is_stack_sorted(&a, ASCENDANT) && !b.size)
		printf("Ok\n");
	else
		printf("Ko\n");
	return (0);
}
