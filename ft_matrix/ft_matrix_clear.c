/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_clear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 13:11:59 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 13:17:12 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_matrix.h"

void	ft_matrix_clear(t_matrix **mat)
{
	int			i;
	t_matrix	*tmp;

	tmp = *mat;
	if (!tmp)
		return ;
	if (tmp->content)
	{
		i = -1;
		while (++i < tmp->rows)
			free(tmp->content[i]);
		free(tmp->content);
	}
	free(tmp);
	*mat = 0;
}
