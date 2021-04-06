/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:13:19 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 18:04:41 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;

	int arr[] = {2,5};
	int value;
	scanf("%d", &value);
	printf("index = %d\n", ft_binsearch_index(arr, sizeof(arr) / sizeof(int), value));
	if (argc < 2)
		return (0);
	construct_stack(&a);
	construct_stack(&b);
	fill_stack(&a, 1, argc, argv);
	ft_verbose(&a, &b, 0);
	ft_insert_in_stack(&a, "a", value);
	ft_verbose(&a, &b, 0);
}
