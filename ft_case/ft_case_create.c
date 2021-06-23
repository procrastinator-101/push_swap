/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:56:22 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 17:58:13 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

t_case	*ft_case_create(int *arr, t_solution *solutions)
{
	t_case	*node;

	node = malloc(sizeof(t_case));
	if (!node)
		return (0);
	node->arr = arr;
	node->solutions = solutions;
	return (node);
}
