/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_execution_error.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 16:41:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/07 21:39:17 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_manage_execution_error(t_stack *a, t_stack *b, int error)
{
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	if (error == EMAF)
		ft_putstr_fd("memory allocation failure\n", 2);
	exit(EXIT_FAILURE);
}
