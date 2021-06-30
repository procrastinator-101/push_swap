/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_pushback.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 17:37:10 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/30 17:45:42 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_pushback(t_path **path, char *str)
{
	t_path	*node;

	node = ft_path_create(str);
	if (!node)
		ft_path_clear(path);
	else
		ft_path_addback(path, node);
}
