/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_del.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:58:40 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/20 13:39:49 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_del(t_case *node)
{
	if (!node)
		return ;
	free(node->arr);
	ft_solution_clear(&(node->solutions));
	free(node);
}
