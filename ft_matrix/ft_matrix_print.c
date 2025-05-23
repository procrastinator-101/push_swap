/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:18:52 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 18:38:37 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_print(t_matrix *mat)
{
	int	i;
	int	j;

	printf("===============================================================\n");
	i = -1;
	while (++i < mat->rows)
	{
		j = -1;
		while (++j < mat->cols)
		{
			printf("%d", mat->content[i][j]);
			if (j < mat->cols - 1)
				printf(" ");
		}
		printf("\n");
	}
	printf("===============================================================\n");
}
