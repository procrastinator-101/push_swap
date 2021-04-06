/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:13:19 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 22:04:18 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	count = 0;
	/*
	int arr[] = {2,5};
	int value;
	scanf("%d", &value);
	printf("index = %d\n", ft_binsearch_index(arr, sizeof(arr) / sizeof(int), value));
	*/
	if (argc < 2)
		return (0);
	construct_stack(&a);
	construct_stack(&b);
	fill_stack(&a, 1, argc, argv);
	ft_verbose(&a, &b, 0);
	ft_sort_stack(&a, &b);
	printf("nb_ops = %d\n", count);
}
