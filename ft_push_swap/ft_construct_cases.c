/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_construct_cases.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:51:18 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/31 19:54:19 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_case	*ft_create_paircases(int *arr, int size)
{
	int		*tmp;
	t_case	*node1;
	t_case	*node2;

	node1 = ft_case_create(arr, size, 0, ASCENDANT);
	if (!node1)
		return (0);
	tmp = malloc(size * sizeof(int));
	if (!tmp)
	{
		ft_case_del(node1);
		return (0);
	}
	ft_memcpy(tmp, arr, size * sizeof(int));
	node2 = ft_case_create(tmp, size, 0, DESCENDANT);
	if (!node2)
	{
		free(tmp);
		ft_case_del(node1);
		return (0);
	}
	ft_case_addback(&node1, node2);
	return (node1);
}

t_case	*ft_construct_cases(t_list *permutations, int size)
{
	t_case	*tmp;
	t_case	*cases;
	t_list	*head;

	cases = 0;
	head = permutations;
	while (head)
	{
		tmp = ft_create_paircases(head->content, size);
		head->content = 0;
		if (!tmp)
		{
			ft_case_clear(&cases);
			break ;
		}
		ft_case_addback(&cases, tmp);
		head = head->next;
	}
	ft_lstclear(&permutations, free);
	return (cases);
}
