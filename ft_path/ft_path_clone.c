/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_clone.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:26:44 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 11:31:27 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

t_path	*ft_path_clone(t_path *src)
{
	t_path	*ret;
	t_path	*head;

	ret = 0;
	head = src;
	while (head)
	{
		ft_path_pushback(&ret, head->str);
		if (!ret)
			return (0);
		head = head->next;
	}
	return (ret);
}
