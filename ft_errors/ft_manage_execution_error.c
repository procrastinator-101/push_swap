/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_execution_error.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 16:41:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/24 18:38:56 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_manage_execution_error(t_stack *a, t_stack *b, int error)
{
	ft_stack_clear(&a);
	ft_stack_clear(&b);
	ft_print_error_msg(error);
	exit(EXIT_FAILURE);
}
