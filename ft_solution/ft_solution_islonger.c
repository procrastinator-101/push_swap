/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_islonger.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:46:21 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 14:46:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

int	ft_solution_islonger(void *arg1, void *arg2)
{
	if (((t_solution *)arg1)->nb_steps > ((t_solution *)arg2)->nb_steps)
		return (1);
	return (0);
}
