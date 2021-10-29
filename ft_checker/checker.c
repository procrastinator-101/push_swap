/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:42:06 by youness           #+#    #+#             */
/*   Updated: 2021/10/29 18:46:11 by yarroubi         ###   ########.fr       */
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
		ft_manage_parsing_error(a, EMAF);
	ft_parse_arguments(a, 1, argc, argv);
	b = ft_stack_create();
	if (!b)
		ft_manage_parsing_error(a, EMAF);
	parser(0, a, b);
	if (ft_stack_issorted(a, ASCENDANT) && !b->end)
		printf("Ok\n");
	else
		printf("Ko\n");
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	return (0);
}
