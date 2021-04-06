/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:48:25 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 18:10:23 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_shared_functions.h"

static int	check_duplicate(t_stack *a, int num)
{
	int	i;

	i = 0;
	while (i < a->size && a->content[i] != num)
		i++;
	if (i < a->size)
		return (1);
	return (0);
}

void	fill_stack(t_stack *stack, int start, int argc, char **argv)
{
	int	num;
	int	error;

	while (--argc >= start)
	{
		num = ft_atoi_check(argv[argc], &error);
		if (error)
			manage_error(stack, error);
		if (check_duplicate(stack, num))
			manage_error(stack, EDUP);
		ft_push(stack, num);
	}
}
