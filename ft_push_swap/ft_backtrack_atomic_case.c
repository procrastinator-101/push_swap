/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_atomic_case.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 09:11:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 13:43:39 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

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

	ret = ft_stack_clone(src);
	if (!ret)
		return (0);
	error = ft_execute_intruction(ret, 0, instruction);
	if (!error)
		return (ret);
	ft_stack_clear(&ret);
	return (0);
}

static int	ft_backtrack_step(t_stack *src, t_path *path, t_case *state, \
			int depth)
{
	int			i;
	int			error;
	t_stack		*tmp;

	i = -1;
	while (++i < NB_INTRUCTIONS)
	{
		ft_path_pushback(&path, ft_getinstruction(i));
		if (!path)
			return (EMAF);
		tmp = ft_prepare_stack(src, ft_getinstruction(i));
		if (!tmp)
		{
			ft_path_clear(&path);
			return (EMAF);
		}
		error = ft_backtrack_atomic_case(tmp, path, state, depth + 1);
		ft_stack_clear(&tmp);
		if (error)
			return (EMAF);
		ft_path_removeback(&path);
	}
	return (0);
}

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
	if (ft_stack_issorted(src, state->order))
		return (ft_append_path(path, state));
	if (depth == state->max_pathsteps)
		return (0);
	return (ft_backtrack_step(src, path, state, depth));
}
