/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_construct_cases.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:51:18 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/07 19:33:07 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_case	*ft_construct_cases(t_list *permutations, int size)
{
	t_case	*tmp;
	t_case	*cases;
	t_list	*head;

	cases = 0;
	head = permutations;
	while (head)
	{
		tmp = ft_case_create(head->content, size, 0);
		if (!tmp)
		{
			ft_case_clear(&cases);
			ft_lstclear(&head, free);
			break ;
		}
		head->content = 0;
		ft_case_addback(&cases, tmp);
		head = head->next;
	}
	ft_lstclear(&permutations, free);
	return (cases);
}
