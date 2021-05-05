/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_front_lst_solution.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:41:09 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 18:07:07 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_front_lst_solution(t_solution **tail, t_solution *new)
{
	if (new)
	{
		new->next = *tail;
		*tail = new;
	}
}
