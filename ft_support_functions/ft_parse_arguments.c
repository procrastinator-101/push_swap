/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_arguments.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:54:42 by youness           #+#    #+#             */
/*   Updated: 2021/05/05 20:48:42 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_support_functions.h"

static int	ft_check_duplicate(t_stack *a, int num)
{
	int	i;

	i = 0;
	while (i < a->size && a->content[i] != num)
		i++;
	if (i < a->size)
		return (1);
	return (0);
}

void	ft_parse_arguments(t_stack *stack, int argb, int argc, char **argv)
{
	int	num;
	int	len;
	int	error;
	int	start;

	while (--argc >= argb)
	{
		start = 0;
		while (argv[argc][start])
		{
			num = ft_atoi_check_len(argv[argc] + start, &error, &len);
			if (error)
				ft_manage_parsing_error(stack, error);
			if (ft_check_duplicate(stack, num))
				ft_manage_parsing_error(stack, EDUP);
			ft_push(stack, num);
			start += len;
		}
	}
}
