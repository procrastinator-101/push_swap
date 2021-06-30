/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_intersect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:41:59 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 17:49:04 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_path	*ft_add_step(t_path *dst, t_path **src, int *index)
{
	ft_path_pushback(&dst, (*src)->str);
	if (!dst)
		return (0);
	*src = (*src)->next;
	(*index)++;
	return (dst);
}

t_path	*ft_update_path(t_matrix *mat, t_path *path, t_path *p1, t_path *p2)
{
	int			i;
	int			j;
	int			candidate;

	i = 0;
	j = 0;
	while (i < mat->rows || j < mat->cols)
	{
		candidate = ft_getcandidate(mat, i, j);
		if (!candidate)
		{
			path = ft_add_step(path, &p1, &i);
			p2 = p2->next;
			j++;
		}
		else if (candidate == 1)
			path = ft_add_step(path, &p1, &i);
		else
			path = ft_add_step(path, &p2, &j);
		if (!path)
			break ;
	}
	return (path);
}

t_path	*ft_path_intersect(t_path *p1, t_path *p2)
{
	t_matrix	*mat;

	mat = ft_path_getintersection_matrix(p1, p2);
	if (!mat)
		return (0);
	return (ft_update_path(mat, 0, p1, p2));
}
