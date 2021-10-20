/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 20:16:44 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 16:32:08 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	a;
	unsigned char	*str;

	str = (unsigned char *)s;
	a = c;
	i = -1;
	while (++i < n)
	{
		if (str[i] == a)
			break ;
	}
	if (i == n)
		return (0);
	return ((void *)(str + i));
}
