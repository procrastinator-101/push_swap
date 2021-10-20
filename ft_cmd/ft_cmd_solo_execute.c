/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_solo_execute.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:07:20 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 12:10:04 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd.h"

int	ft_cmd_solo_execute(t_container *container, t_cmd cmd)
{
	if (cmd.type == SWAP)
		ft_stack_swap(container->stack);
	else if (cmd.type == ROTATE)
		ft_stack_rotate(container->stack);
	else if (cmd.type == REVROTATE)
		ft_stack_reverse_rotate(container->stack);
	return (0);
}
