/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:51:10 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 13:22:12 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_matrix
{
	int		**content;
	int		rows;
	int		cols;
}			t_matrix;

void		ft_matrix_print(t_matrix *mat);
void		ft_matrix_nclear(t_matrix **mat, int n);
void		ft_matrix_clear(t_matrix **mat);
t_matrix	*ft_matrix_create(int rows, int cols);

#endif
