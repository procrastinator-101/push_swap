/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_irandoms.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 22:26:51 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 22:49:40 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomiser.h"

int	*generate_irandoms(int nb, int min, int max)
{
	int	i;
	int	j;
	int	*ret;

	ret = malloc(nb * sizeof(int));
	if (!ret)
		return (0);
	i = 0;
	srand(time(0));
	while (i < nb)
	{
		ret[i] = rand();
		j = 0;
		while (j < i && ret[j] != ret[i])
			j++;
		if (j >= i)
			i++;
	}
	return (ret);
}
