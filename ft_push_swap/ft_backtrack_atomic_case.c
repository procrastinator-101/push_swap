/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_atomic_case.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:57:20 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 12:37:26 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static t_solution	*ft_addsolution(t_path *path, int depth, int *max_depth)
{
	t_path	*new_path;

	new_path = 0;
	if (depth < *max_depth)
	{
		*max_depth = depth;
		new_path = ft_path_clone(path);
		if (!new_path)
			return (0);
	}
	return (ft_solution_create(new_path));
}

static t_solution	*ft_clean_residus(t_path *path, t_solution *solution)
{
	ft_path_clear(&path);
	ft_solution_clear(&solution);
	return (0);
}

static char	*ft_getinstruction(int index)
{
	if (index == 0)
		return ("ra");
	if (index == 1)
		return ("rra");
	return ("sa");
}

static t_stack	*ft_prepare_stack(t_stack *src, char *instruction)
{
	int		error;
	t_stack	*ret;

	ret = ft_duplicate_stack(src);
	if (!ret)
		return (0);
	error = ft_execute_intruction(ft_getinstruction(i), ret, 0);
	if (!error)
		return (ret);
	ft_destroy_stack(&ret);
	return (0);
}

t_solution	*ft_backtrack_atomic_case(t_stack *src, t_path *path, int depth, \
			int *max_depth)
{
	int			i;
	t_stack		*tmp;
	t_solution	*ret;
	t_solution	*solution;

	if (ft_is_stack_sorted(src, ASCENDANT) || depth >= *max_depth)
		return (ft_addsolution(path, depth, max_depth));
	i = -1;
	ret = 0;
	while (++i < NB_INTRUCTIONS)
	{
		ft_path_pushback(&path, ft_getinstruction(i));
		if (!path)
			return (0);
		tmp = ft_prepare_stack(src, ft_getinstruction(i));
		if (!tmp)
			return (ft_clean_residus(path, ret));
		solution = ft_backtrack_atomic_case(tmp, path, depth + 1, max_depth);
		ft_destroy_stack(&tmp);
		if (!solution)
			return (ft_clean_residus(path, ret));
		ft_solution_addback(&ret, solution);
		ft_solution_remove_if(&ret, ft_isshorter, solution);
		ft_path_removeback(&path);
	}
	return (ret);
}
