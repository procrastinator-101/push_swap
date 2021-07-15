/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair_create.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:54:24 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:37:58 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_pair.h"

t_pair	*ft_pair_create(int first, int second)
{
	t_pair	*pair;

	pair = malloc(sizeof(t_pair));
	if (!pair)
		return (0);
	pair->first = first;
	pair->second = second;
	pair->next = 0;
	pair->previous = 0;
	return (pair);
}
