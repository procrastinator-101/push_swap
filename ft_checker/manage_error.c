/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:36:48 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 19:45:01 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errors.h"

void	manage_error(t_stack *stack, int error)
{
	ft_destroy_stack(stack);
	if (EDU)
		ft_putstr_fd("duplicates detected\n", 2);
	else if (EIOF)
		ft_putstr_fd("integer overflow detected\n", 2);
	else if (EII)
		ft_putstr_fd("invalid instruction detected\n", 2);
	else if (ENAI)
		ft_putstr_fd("a non integer detected\n", 2);
	exit(EXIT_FAILURE);
}
