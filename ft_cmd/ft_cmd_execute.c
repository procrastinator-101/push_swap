/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_execute.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 09:51:02 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 12:11:52 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cmd.h"

int	ft_cmd_execute(t_container *a, t_container *b, t_cmd cmd)
{
	if (cmd.type == PUSH)
	{
		if (cmd.target == 'a')
			return (ft_container_push(a, ft_container_pop(b)));
		return (ft_container_push(b, ft_container_pop(a)));
	}
	if (cmd.target == 'a')
		ft_cmd_solo_execute(a, cmd.type);
	else if (cmd.target == 'b')
		ft_cmd_solo_execute(b, cmd.type);
	else
	{
		ft_cmd_solo_execute(a, cmd.type);
		ft_cmd_solo_execute(b, cmd.type);
	}
}
