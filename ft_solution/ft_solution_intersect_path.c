/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution_intersect_path.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 11:02:24 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/05 12:29:08 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_solution.h"

static t_solution	*ft_update_ret(t_solution *ret, t_path *p1, t_path *p2)
{
	t_path	*tmp;

	tmp = ft_path_intersect(p1, p2);
	if (!tmp)
	{
		ft_solution_del(ret);
		return (0);
	}
	if (!ret || ft_path_size(tmp) < ret->nb_steps)
	{
		ft_solution_del(ret);
		ret = ft_solution_create(tmp);
		if (!ret)
		{
			ft_path_clear(&tmp);
			return (0);
		}
	}
	return (ret);
}

t_solution	*ft_solution_intersect_path(t_solution *solution, t_path *path)
{
	t_solution	*ret;
	t_solution	*head;

	ret = 0;
	head = solution;
	while (head)
	{
		ret = ft_update_ret(ret, head->path, path);
		if (!ret)
			return (0);
		head = head->next;
	}
	return (ret);
}
