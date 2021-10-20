/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_addsolution.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 19:40:29 by youness           #+#    #+#             */
/*   Updated: 2021/07/02 20:22:32 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_addsolution(t_case *node, t_solution *solution)
{
	if (solution)
		node->max_pathsteps = solution->nb_steps;
	else
		 node->max_pathsteps = 0;
	ft_solution_remove_shadows(&(node->solutions), node->max_pathsteps);
	if (solution)
		ft_solution_addfront(&(node->solutions), solution);
}
