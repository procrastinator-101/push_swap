/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_parsing_error.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:36:48 by youness           #+#    #+#             */
/*   Updated: 2021/05/05 17:52:31 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_manage_parsing_error(t_stack *stack, int error)
{
	ft_putstr_fd("error\n", 2);
	ft_destroy_stack(&stack);
	if (error == EDUP)
		ft_putstr_fd("duplicates detected\n", 2);
	else if (error == EIOF)
		ft_putstr_fd("integer overflow detected\n", 2);
	else if (error == EII)
		ft_putstr_fd("invalid instruction detected\n", 2);
	else if (error == EIA)
		ft_putstr_fd("a invalid argument detected\n", 2);
	exit(EXIT_FAILURE);
}
