/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_paths.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:20:28 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 18:09:28 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_destroy_paths(t_list **paths)
{
	t_list	*path;
	t_list	*next;

	if (!*paths)
		return ;
	path = (*paths)->content;
	while (path)
	{
		next = path->next;
		ft_lstclear(&path, free);
		path = next;
	}
	*paths = 0;
}
