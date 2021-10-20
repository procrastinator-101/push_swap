/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case_addfront.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:03:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:04:35 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_case.h"

void	ft_case_addfront(t_case **tail, t_case *node)
{
	if (!*tail)
	{
		*tail = node;
		return ;
	}
	node->next = *tail;
	*tail = node;
}
