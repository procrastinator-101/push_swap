/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:31:58 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:38:12 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_pair.h"

void	ft_pair_print(t_pair *tail)
{
	int		n;
	t_pair	*head;

	head = tail;
	while (head)
	{
		printf("-------------------------------------------------\n|");
		n = 24 - printf("%d", head->first);
		while (n--)
			printf(" ");
		n = 24 - printf("%d", head->second);
		while (n--)
			printf(" ");
		printf("|\n-------------------------------------------------\n");
		head = head->next;
	}
}
