/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 22:48:32 by youness           #+#    #+#             */
/*   Updated: 2021/05/05 22:50:15 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lst.h"

void	ft_lstprint(t_list *tail, void (*print)(void *))
{
	while (tail)
	{
		print(tail->content);
		tail = tail->next;
	}
}
