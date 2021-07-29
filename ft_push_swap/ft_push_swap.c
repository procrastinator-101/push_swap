/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:42:51 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 22:59:05 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	main(int argc, char **argv)
{
	t_case		*cases;
	t_container	*a;
	t_container	*b;

	a = ft_initialise_container('a');
	if (!a)
		ft_manage_execution_error(0, 0, EMAF);//to update
	b = ft_initialise_container('b');
	if (!b)
	{
		ft_container_del(a);
		ft_manage_execution_error(0, 0, EMAF);//to update
	}
	ft_parse_arguments(a->stack, 1, argc, argv);//check errors
	a->chunks = ft_pair_create(0, a->stack->end);//to protect
	cases = ft_initialise_cases();
	if (!cases)
		ft_manage_execution_error(0, 0, EMAF);//to update
	cases = ft_getatomic_solutions(cases);
	/*
	ft_case_print(cases);
	int sizes[5];
	ft_bzero(sizes, 5 * sizeof(int));
	for (t_case *head = cases; head; head = head->next)
	{
		if (head->max_pathsteps == 0)
		{
			for (int i = 0; i < head->size; i++)
				printf("%d ", head->arr[i]);
			printf("\n");
		}
		if (head->max_pathsteps > sizes[head->size])
			sizes[head->size] = head->max_pathsteps;
	}
	for (int i = 0; i < 5; i++)
		printf("sizes[%d] = %d\n", i, sizes[i]);
	*/
	
	//ft_container_print(a);
	//ft_container_print(b);
	ft_sort(a, b, cases);
	//ft_container_print(a);
	//ft_container_print(b);
	
	/*
	ft_chunkate(a, b, 'a');
	printf("=================== A ==================\n");
	ft_container_print(a);
	printf("=================== B ==================\n");
	ft_container_print(b);
	*/
	ft_container_del(a);
	ft_container_del(b);
	ft_case_clear(&cases);
	return (0);
}
