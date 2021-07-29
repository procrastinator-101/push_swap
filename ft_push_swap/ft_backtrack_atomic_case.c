/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_atomic_case.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:11:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 11:31:12 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static int	ft_append_path(t_path *path, t_case *state)
{
	t_path		*new_path;
	t_solution	*solution;

	if (!path)
	{
		ft_case_addsolution(state, 0);
		return (0);
	}
	new_path = ft_path_clone(path);
	if (!new_path)
	{
		ft_path_clear(&path);
		return (EMAF);
	}
	solution = ft_solution_create(new_path);
	if (!solution)
	{
		ft_path_clear(&path);
		ft_path_clear(&new_path);
		return (EMAF);
	}
	ft_case_addsolution(state, solution);
	return (0);
}

int	ft_backtrack_atomic_case(t_stack *src, t_path *path, t_case *state, \
	int depth)
{
	if (depth > state->max_pathsteps)
		return (0);
	if (ft_stack_issorted(src, state->order) && ft_path_isportable(path))
		return (ft_append_path(path, state));
	if (depth == state->max_pathsteps)
		return (0);
	return (ft_backtrack_step(src, path, state, depth));
}
