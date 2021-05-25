/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_paths.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:20:28 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/06 16:33:16 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_destroy_paths(t_list **paths)
{
	t_list	*path;
	t_list	*next;

	if (!*paths)
		return ;
	path = *paths;
	while (path)
	{
		next = path->next;
		ft_lstclear((t_list **)(&(path->content)), free);
		free(path);
		path = next;
	}
	*paths = 0;
}
