/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:43:45 by youness           #+#    #+#             */
/*   Updated: 2021/07/07 21:29:54 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_support_functions.h"

void	ft_verbose(t_stack *a, t_stack *b, char *instruction)
{
	int	i;
	int	j;

	printf("------------------------------------------------------------\n");
	if (instruction)
		printf("Exec %s:\n", instruction);
	else
		printf("Init a and b:\n");
	i = a->end - 1;
	j = b->end - 1;
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			printf("%-11d", a->data[i]);
		else
			printf("           ");
		if (j >= 0)
			printf("%d", b->data[j]);
		printf("\n");
		i--;
		j--;
	}
	printf("---------- ----------\n");
	printf("    a          b     \n");
	printf("------------------------------------------------------------\n");
}
