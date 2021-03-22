/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:46:07 by yarroubi          #+#    #+#             */
/*   Updated: 2019/10/21 14:14:57 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = -1;
	if (size > 0)
	{
		while (++i < size - 1 && *(src + i))
			dst[i] = src[i];
		dst[i] = 0;
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
