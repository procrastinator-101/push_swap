/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_permutations.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 15:36:26 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 17:53:25 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_generate(t_list **permutations, int *arr, int k, int size)
{
	int	i;
	int	ret;

	if (k == 1)
		return (ft_append_permutation(permutations, arr, size));
	i = -1;
	while (++i < k)
	{
		ret = ft_generate(permutations, arr, k - 1, size);
		if (!ret)
			return (0);
		if (k % 2)
			ft_iswap(arr + i, arr + k - 1);
		else
			ft_iswap(arr, arr + k - 1);
	}
	return (1);
}

t_list	*ft_generate_permutations(int *arr, int size)
{
	int		ret;
	t_list	*permutations;

	permutations = 0;
	ret = ft_generate(&permutations, arr, size, size);
	if (ret)
		return (permutations);
	return (0);
}
