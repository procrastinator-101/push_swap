/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialise_cases.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:32:04 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:51:40 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

t_case	*ft_initialise_cases(void)
{
	int		i;
	t_case	*tmp;
	t_case	*cases;

	i = 1;
	cases = 0;
	while (++i < 5)
	{
		tmp = ft_getncases(i);
		if (!tmp)
		{
			ft_case_clear(&cases);
			return (0);
		}
		ft_case_addback(&cases, tmp);
	}
	return (cases);
}
