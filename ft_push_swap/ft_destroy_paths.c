/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_paths.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:20:28 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/06 00:10:21 by youness          ###   ########.fr       */
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
		printf("path = %p next = %p\n", path, path->next);
		next = path->next;
		ft_lstclear(&path, free);
		path = next;
	}
	printf("out\n");
	*paths = 0;
}
