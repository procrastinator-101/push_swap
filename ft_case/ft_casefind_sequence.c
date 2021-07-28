/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_casefind_sequence.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 21:01:45 by youness           #+#    #+#             */
/*   Updated: 2021/07/28 22:57:31 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

t_case	*ft_casefind_sequence(t_case *cases, int *arr, int size, int order)
{
	int		i;
	t_case	*head;

	head = cases;
	while (head)
	{
		if (head->size == size && head->order == order)
		{
			i = -1;
			while (++i < size)
			{
				if (arr[i] != head->arr[i])
					break ;
			}
			if (i == size)
				return (head);
		}
		head = head->next;
	}
	return (0);
}
