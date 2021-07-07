/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_parsing_error.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:36:48 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 21:40:05 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_manage_parsing_error(t_stack *stack, int error)
{
	ft_putstr_fd("error\n", 2);
	ft_stack_clear(&stack);
	if (error == EDUP)
		ft_putstr_fd("duplicates detected\n", 2);
	else if (error == EIOF)
		ft_putstr_fd("integer overflow detected\n", 2);
	else if (error == EII)
		ft_putstr_fd("invalid instruction detected\n", 2);
	else if (error == EIA)
		ft_putstr_fd("a invalid argument detected\n", 2);
	else if (error == ENAN)
		ft_putstr_fd("a not a number detected\n", 2);
	exit(EXIT_FAILURE);
}
