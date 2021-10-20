/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_addfront.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:24:37 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:24:53 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_addfront(t_solution **tail, t_solution *node)
{
	if (!*tail)
	{
		*tail = node;
		return ;
	}
	node->next = *tail;
	*tail = node;
}
