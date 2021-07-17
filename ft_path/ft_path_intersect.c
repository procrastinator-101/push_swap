/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_intersect.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:41:59 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 13:18:43 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

static char	*ft_get_step(char *src, int target)
{
	int		len;
	char	*dst;

	dst = ft_strdup(src);
	if (!dst)
		return (0);
	len = ft_strlen(dst);
	if (target == 'b')
		dst[len - 1] = 'b';
	else if (target == 'c')
	{
		if (!ft_strcmp(dst, "sa"))
			dst[len - 1] = 's';
		else
			dst[len - 1] = 'r';
	}
	return (dst);
}

static t_path	*ft_add_step(t_path *dst, t_path **src, int *index, int target)
{
	char	*str;

	str = ft_get_step((*src)->str, target);
	if (!str)
	{
		ft_path_clear(&dst);
		return (0);
	}
	ft_path_pushback(&dst, str);
	free(str);
	if (!dst)
		return (0);
	*src = (*src)->next;
	(*index)++;
	return (dst);
}

t_path	*ft_update_path(t_matrix *mat, t_path *path, t_path *a, t_path *b)
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
			path = ft_add_step(path, &a, &i, 'c');
			b = b->next;
			j++;
		}
		else if (candidate == 1)
			path = ft_add_step(path, &a, &i, 'a');
		else
			path = ft_add_step(path, &b, &j, 'b');
		if (!path)
			break ;
	}
	ft_matrix_clear(&mat);
	return (path);
}

t_path	*ft_path_intersect(t_path *a, t_path *b)
{
	t_matrix	*mat;

	if (!a)
		return (ft_path_clone(b));
	if (!b)
		return (ft_path_clone(a));
	mat = ft_path_getintersection_matrix(a, b);
	if (!mat)
		return (0);
	return (ft_update_path(mat, 0, a, b));
}
