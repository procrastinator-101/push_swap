/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_del.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:21:53 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 20:01:08 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

void	ft_solution_del(t_solution *node)
{
	if (!node)
		return ;
	ft_path_clear(&(node->path));
	free(node);
}
