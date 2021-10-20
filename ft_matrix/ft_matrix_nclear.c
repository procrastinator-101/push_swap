/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_nclear.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:17:30 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 13:18:44 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_nclear(t_matrix **mat, int n)
{
	int			i;
	t_matrix	*tmp;

	tmp = *mat;
	if (!tmp)
		return ;
	if (tmp->content)
	{
		i = 0;
		while (i < n && i < tmp->rows)
			free(tmp->content[i++]);
		free(tmp->content);
	}
	free(tmp);
	*mat = 0;
}
