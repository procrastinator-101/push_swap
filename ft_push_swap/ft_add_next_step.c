/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_next_step.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:22:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 16:19:50 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_next_step(t_list **path, int index)
{
	char	*str;
	t_list	*node;

	if (index == 1)
		str = "s";
	else if (index == 2)
		str = "r";
	else
		str = "rr";
	node = malloc(sizeof(t_list));
	str = ft_strdup(str);
	if (!node || !str)
	{
		free(str);
		free(node);
		ft_lstclear(path, free);
		*path = 0;
		return ;
	}
	ft_lstadd_back(path, node);
	node->content = str;
	node->next = 0;
}
