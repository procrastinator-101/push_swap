/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_intersect.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:51:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/05 12:14:35 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

t_solution	*ft_solution_intersect(t_solution *s1, t_solution *s2)
{
	t_solution	*ret;
	t_solution	*tmp;

	ret = 0;
	while (s1)
	{
		tmp = ft_solution_intersect_path(s2, s1->path);
		if (!tmp)
		{
			ft_solution_del(ret);
			return (0);
		}
		if (!ret || tmp->nb_steps < ret->nb_steps)
		{
			ft_solution_del(ret);
			ret = tmp;
		}
		s1 = s1->next;
	}
	return (ret);
}
