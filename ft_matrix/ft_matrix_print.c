/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:18:52 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 13:20:57 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_print(t_matrix *mat)
{
	int	i;
	int	j;

	i = -1;
	while (++i < mat->rows)
	{
		while (++j < mat->cols)
		{
			printf("%d");
			if (j < mat->cols - 1)
				printf(" ");
		}
		printf("\n");
	}
}
