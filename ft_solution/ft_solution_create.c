/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:19:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 20:00:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

t_solution	*ft_solution_create(t_path *path)
{
	t_solution	*node;

	node = malloc(sizeof(t_solution));
	if (!node)
		return (0);
	node->path = path;
	node->next = 0;
	return (node);
}
