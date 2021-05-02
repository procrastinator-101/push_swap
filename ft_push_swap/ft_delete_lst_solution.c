/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_lst_solution.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 14:07:04 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 16:21:49 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_delete_lst_solution(t_solution **solution)
{
	if (!(*solution))
		return ;
	ft_destroy_paths(&((*solution)->paths));
	ft_destroy_stack(&((*solution)->stack));
	free(*solution);
	*solution = 0;
}
