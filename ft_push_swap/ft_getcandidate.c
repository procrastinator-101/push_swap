/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcandidate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:30:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 17:35:46 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_getrows_distance(t_matrix *mat, int row, int col)
{
	while (row < mat->row && !mat[row][col])
		row++;
	return  (row);
}

static int	ft_getcols_distance(t_matrix *mat, int row, int col)
{
	while (col < mat->cols && !mat[row][col])
		col++;
	return (col);
}

static int	ft_getdiag_distance(t_matrix *mat, int row, int col)
{
	int	dist;

	dist = 0;
	while (mat[row][col])
	{
		row++;
		col++;
		dist++;
	}
	return (dist);
}

int	ft_getcandidate(t_matrix *mat, int i, int j)
{
	int	dist1;
	int	dist2;

	if (mat[i][j])
		return (0);
	dist1 = ft_getrows_distance(mat, i);
	dist2 = ft_getcols_distance(mat, j);
	if (dist1 < dist2)
		return (1);
	if (dist1 > dist2)
		return (2);
	dist1 = ft_getdiag_distance(mat, i + dist1, j);
	dist2 = ft_getdiag_distance(mat, i, j + dist2);
	if (dist1 < dist2)
		return (2);
	return (1);
}
