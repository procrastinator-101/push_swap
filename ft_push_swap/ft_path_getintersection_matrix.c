/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_getintersection_matrix.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:35:55 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 15:36:34 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_matrix	ft_path_getintersection_matrix(t_path *p1, t_path *p2)
{
	t_path		*tmp;
	t_matrix	*mat;

	mat = ft_matrix_create(ft_path_size(p1), ft_path_size(p2));
	if (!mat)
		return (0);
	i = -1;
	while (++i < mat->rows)
	{
		j = -1;
		tmp = p2;
		while (++j < mat->cols)
		{
			mat->content[i][j] = !ft_strcmp(p1->str, tmp->str);
			tmp = tmp->next;
		}
		p1 = p1->next;
	}
	return (mat);
}
