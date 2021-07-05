/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getcandidate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 16:30:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/05 12:42:53 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

static int	ft_getrows_distance(t_matrix *mat, int row, int col)
{
	int	dist;

	dist = 1;
	while (row + dist < mat->rows && !mat->content[row + dist][col])
		dist++;
	if (row + dist < mat->rows)
		return (dist);
	return (-1);
}

static int	ft_getcols_distance(t_matrix *mat, int row, int col)
{
	int	dist;

	dist = 1;
	while (col + dist < mat->cols && !mat->content[row][col + dist])
		dist++;
	if (col + dist < mat->cols)
		return (dist);
	return (-1);
}

static int	ft_getdiag_distance(t_matrix *mat, int row, int col)
{
	int	dist;

	dist = 0;
	while (row < mat->rows && col < mat->cols && mat->content[row][col])
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

	if (i >= mat->rows)
		return (2);
	if (j >= mat->cols)
		return (1);
	if (mat->content[i][j])
		return (0);
	dist1 = ft_getrows_distance(mat, i, j);
	dist2 = ft_getcols_distance(mat, i, j);
	if (dist1 != -1 && (dist1 < dist2 || dist2 == -1))
		return (1);
	if (dist2 != -1 && (dist2 < dist1 || dist1 == -1))
		return (2);
	if (dist1 == -1 && dist2 == -1)
		return (1);
	dist1 = ft_getdiag_distance(mat, i + dist1, j);
	dist2 = ft_getdiag_distance(mat, i, j + dist2);
	if (dist1 < dist2)
		return (2);
	return (1);
}
