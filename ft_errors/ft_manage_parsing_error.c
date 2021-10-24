/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_parsing_error.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:36:48 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 18:39:24 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_manage_parsing_error(t_stack *stack, int error)
{
	ft_stack_clear(&stack);
	ft_print_error_msg(error);
	exit(EXIT_FAILURE);
}
