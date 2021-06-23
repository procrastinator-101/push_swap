/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:56 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:55:56 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

t_path	*ft_path_create(char *str)
{
	t_path	*node;

	node = malloc(sizeof(t_path));
	if (!node)
		return (0);
	node->str = str;
	node->next = 0;
	return (node);
}
