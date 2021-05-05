/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_next_step.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 13:22:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 18:32:35 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_add_next_step(t_list **path, t_stack *dst, int index)
{
	int		ret;
	char	*str;
	t_list	*node;

	if (index == 1)
		str = "sa";
	else if (index == 2)
		str = "ra";
	else
		str = "rra";
	ret = ft_execute_intruction(str, dst, NULL);
	node = malloc(sizeof(t_list));
	str = ft_strdup(str);
	if (!node || !str || ret)
	{
		free(str);
		free(node);
		ft_lstclear(path, free);
		return ;
	}
	ft_lstadd_back(path, node);
	node->content = str;
	node->next = 0;
}
