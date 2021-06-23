/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:55:56 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:55:56 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_path.h"

void	ft_path_print(t_path *tail)
{
	t_path	*head;

	head = tail;
	while (head)
	{
		printf("%s\n", head->str);
		head = head->next;
	}
}
