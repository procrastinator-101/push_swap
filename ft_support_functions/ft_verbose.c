/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verbose.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 20:43:45 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 18:05:42 by yarroubi         ###   ########.fr       */
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
	i = a->size - 1;
	j = b->size - 1;
	while (i >= 0 || j >= 0)
	{
		if (i >= 0)
			printf("%-11d", a->content[i]);
		else
			printf("           ");
		if (j >= 0)
			printf("%d", b->content[j]);
		printf("\n");
		i--;
		j--;
	}
	printf("---------- ----------\n");
	printf("    a          b     \n");
	printf("------------------------------------------------------------\n");
}
