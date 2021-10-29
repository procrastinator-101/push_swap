/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcontainers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <yarroubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 19:27:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/29 19:32:20 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_getcontainers(t_container **a, t_container **b, int argc, \
		char **argv)
{
	t_stack		*stack;

	if (argc < 2)
		exit(EXIT_SUCCESS);
	stack = ft_stack_create();
	if (!stack)
		ft_manage_parsing_error(stack, EMAF);
	ft_parse_arguments(stack, 1, argc, argv);
	*a = ft_container_create(stack, 0, 'a');
	if (!*a)
		ft_manage_parsing_error(stack, EMAF);
	*b = ft_initialise_container('b');
	if (!*b)
		ft_manage_execution_error(*a, *b, EMAF);
}
