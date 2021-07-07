/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_clone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 20:51:35 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 20:54:07 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stack.h"

t_stack	*ft_stack_clone(t_stack *src)
{
	int		i;
	int		ret;
	t_stack	*dst;

	dst = ft_stack_create();
	if (!dst)
		return (0);
	i = -1;
	while (++i < src->end)
	{
		ret = ft_stack_push(dst, src->data[i]);
		if (ret)
			return (0);
	}
	return (dst);
}
