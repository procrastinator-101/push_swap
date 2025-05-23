/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:56:22 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/14 18:12:23 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

t_case	*ft_case_create(int *arr, int size, t_solution *solutions, int order)
{
	t_case	*node;

	node = malloc(sizeof(t_case));
	if (!node)
		return (0);
	node->arr = arr;
	node->size = size;
	node->solutions = solutions;
	node->next = 0;
	node->order = order;
	node->max_pathsteps = INT_MAX;
	return (node);
}
