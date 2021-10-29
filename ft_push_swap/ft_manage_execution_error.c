/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_manage_execution_error.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 16:41:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/29 18:52:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_manage_execution_error(t_container *a, t_container *b, int error)
{
	ft_container_del(a);
	ft_container_del(b);
	ft_print_error_msg(error);
	exit(EXIT_FAILURE);
}
