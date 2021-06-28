/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getsequence.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:38:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/28 20:04:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_getindex(int *arr, int size, int value)
{
	int	i;

	i = -1;
	while (++i < size)
	{
		if (arr[i] == value)
			return (i);
	}
	return (-1);
}

int	*ft_getsequence(int *arr, int size)
{
	int	i;
	int	*tmp;
	int	*ret;

	ret = malloc(size * sizeof(int));
	if (!ret)
		return (0);
	tmp = malloc(size * sizeof(int));
	if (!tmp)
	{
		free(ret);
		return (0);
	}
	ft_memcpy(tmp, arr, size * sizeof(int));
	ft_quick_sort(tmp, size);
	i = -1;
	while (++i < size)
		ret[i] = ft_getindex(tmp, size, arr[i]);
	free(tmp);
	return (ret);
}
