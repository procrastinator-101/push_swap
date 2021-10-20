/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_permutation.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 16:03:50 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:11:23 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_append_permutation(t_list **permutations, int *arr, int size)
{
	int		i;
	int		*ptr;
	t_list	*node;

	ptr = malloc(size * sizeof(int));
	if (!ptr)
		ft_lstclear(permutations, free);
	if (!ptr)
		return (0);
	i = -1;
	while (++i < size)
		ptr[i] = arr[i];
	node = ft_lstnew(ptr);
	if (!node)
	{
		free(ptr);
		ft_lstclear(permutations, free);
		return (0);
	}
	ft_lstadd_back(permutations, node);
	return (1);
}
