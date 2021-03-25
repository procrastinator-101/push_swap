/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:36:48 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 21:29:39 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors.h"

void	manage_error(t_stack *stack, int error)
{
	ft_putstr_fd("error\n", 2);
	ft_destroy_stack(stack);
	if (error == EDUP)
		ft_putstr_fd("duplicates detected\n", 2);
	else if (error == EIOF)
		ft_putstr_fd("integer overflow detected\n", 2);
	else if (error == EII)
		ft_putstr_fd("invalid instruction detected\n", 2);
	else if (error == ENAI)
		ft_putstr_fd("a non integer detected\n", 2);
	exit(EXIT_FAILURE);
}
