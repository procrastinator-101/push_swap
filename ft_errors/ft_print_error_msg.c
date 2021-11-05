/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error_msg.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <yarroubi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:34:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/11/05 12:11:39 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_errors.h"

void	ft_print_error_msg(int error)
{
	ft_putstr_fd("Error\n", 2);
	if (error == EDUP)
		ft_putstr_fd("duplicates detected\n", 2);
	else if (error == EIOF)
		ft_putstr_fd("integer overflow detected\n", 2);
	else if (error == EII)
		ft_putstr_fd("invalid instruction detected\n", 2);
	else if (error == EIA)
		ft_putstr_fd("invalid argument detected\n", 2);
	else if (error == EMAF)
		ft_putstr_fd("memory allocation failure\n", 2);
	else if (error == ENAN)
		ft_putstr_fd("a not a number detected\n", 2);
}
