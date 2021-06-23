/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 16:15:04 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_list	*permutations;

	a = ft_construct_stack();
	b = ft_construct_stack();
	ft_parse_arguments(a, 1, argc, argv);
	ft_print_stack(a);
	permutations = ft_generate_permutations(a->content, a->size);
	for (t_list *head = permutations; head; head = head->next)
	{
		for (int i = 0; i < a->size; i++)
			printf("%d ",((int *)(head->content))[i]);
		printf("\n");
	}
	ft_print_stack(a);
	return (0);
}
