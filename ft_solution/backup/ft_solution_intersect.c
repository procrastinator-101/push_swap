/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_intersect.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:51:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/05 11:44:36 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

/*
**	it expectx two solutions. At least one of them has to be non null and has 
**	to have a non null path. Otherwise, the behavious is undefined.
**	it returns the shortest combinaison of the paths contained in the given 
**	solutions.
*/

static t_solution	*ft_handle_empty_solution(t_solution *s1, t_solution *s2)
{
	t_path		*path;
	t_solution	*ret;

	if (!s1)
	{
		path = ft_path_clone(s2->path);
		if (!path)
			return (0);
	}
	else
	{
		path = ft_path_clone(s1->path);
		if (!path)
			return (0);
	}
	ret = ft_solution_create(path);
	if (ret)
		return (ret);
	ft_path_clear(&path);
	return (0);
}

t_solution	*ft_solution_intersect(t_solution *s1, t_solution *s2)
{
	t_solution	*ret;
	t_solution	*tmp;

	if (!s1 || !s2)
		return (ft_handle_empty_solution(s1, s2));
	ret = 0;
	while (s1)
	{
		tmp = ft_solution_intersect_path(s2, s1->path);
		if (!tmp)
		{
			ft_solution_del(ret);
			return (0);
		}
		if (tmp->nb_steps < ret->nb_steps)
		{
			ft_solution_del(ret);
			ret = tmp;
		}
		s1 = s1->next;
	}
	return (ret);
}
