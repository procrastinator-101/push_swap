/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_create.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:59:56 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 17:53:06 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

static t_matrix	*ft_matrix_create_rows(t_matrix *mat)
{
	int	i;

	i = -1;
	while (++i < mat->rows)
	{
		mat->content[i] = malloc(mat->cols * sizeof(int));
		if (!mat->content[i])
		{
			ft_matrix_nclear(&mat, i);
			return (0);
		}
	}
	return (mat);
}

t_matrix	*ft_matrix_create(int rows, int cols)
{
	t_matrix	*mat;

	mat = malloc(sizeof(t_matrix));
	if (!mat)
		return (0);
	mat->rows = rows;
	mat->cols = cols;
	mat->content = malloc(rows * sizeof(int *));
	if (!mat->content)
	{
		free(mat);
		return (0);
	}
	return (ft_matrix_create_rows(mat));
}
