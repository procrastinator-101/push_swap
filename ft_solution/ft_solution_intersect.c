/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_intersect.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:51:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 13:14:55 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

t_solution	*ft_solution_intersect(t_solution *s1, t_solution *s2)
{
	t_solution	*ret;
	t_solution	*tmp;

	ret = 0;
	while (s2)
	{
		tmp = ft_solution_intersect_path(s1, s2->path);
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
		else
			ft_solution_del(tmp);
		s2 = s2->next;
	}
	return (ret);
}
