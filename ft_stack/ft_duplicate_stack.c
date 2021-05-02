/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:36:12 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 15:45:41 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_duplicate_stack(t_stack *src)
{
	int		i;
	t_stack	*dst;

	dst = ft_construct_stack();
	if (!dst)
		return (0);
	i = -1;
	while (++i < src->size)
	{
		ret = ft_push(dst, src->content[i]);
		if (ret)
		{
			free(dst);
			return (0);
		}
	}
	return (dst);
}
