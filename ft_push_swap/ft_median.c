/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_median.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 19:30:46 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/28 20:04:50 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_median(int *arr, int size, int *error)
{
	int	ret;
	int	*tmp;

	*error = EMAF;
	tmp = malloc(size * sizeof(int));
	if (!tmp)
		return (0);
	*error = 0;
	ft_memcpy(tmp, arr, size * sizeof(int));
	ft_quick_sort(tmp, size);
	ret = tmp[size / 2];
	free(tmp);
	return (ret);
}
