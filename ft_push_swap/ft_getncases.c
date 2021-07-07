/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getncases.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:47:27 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/07 19:31:13 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_case	*ft_getncases(int n)
{
	int		i;
	int		*arr;
	t_list	*permutations;

	arr = malloc(n * sizeof(int));
	if (!arr)
		return (0);
	i = -1;
	while (++i < n)
		arr[i] = i;
	permutations = ft_generate_permutations(arr, n);
	free(arr);
	if (!permutations)
		return (0);
	return (ft_construct_cases(permutations, n));
}
