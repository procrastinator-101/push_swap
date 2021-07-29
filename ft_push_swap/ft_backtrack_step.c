/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrack_step.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:29:26 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/17 11:44:32 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static char	*ft_geteligible_intstruction(int index, int ra, int rra, int size)
{
	if (index == 0)
	{
		if (size - ra + rra >= 2)
			return ("sa");
		return (0);
	}
	if (index == 1)
	{
		if (size - ra + rra > 0)
			return ("ra");
		return (0);
	}
	if (ra > rra)
		return ("rra");
	return (0);
}

static char	*ft_getinstruction(t_path *path, int index, int size)
{
	int		ra;
	int		rra;
	t_path	*head;

	ra = 0;
	rra = 0;
	head = path;
	while (head)
	{
		if (!ft_strcmp(head->str, "rra"))
			rra++;
		else if (!ft_strcmp(head->str, "ra"))
			ra++;
		head = head->next;
	}
	return (ft_geteligible_intstruction(index, ra, rra, size));
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

static int	ft_prepare_step(t_path **path, t_stack **tmp, t_stack *src, char *cmd)
{
	ft_path_pushback(path, cmd);
	if (!*path)
		return (EMAF);
	*tmp = ft_prepare_stack(src, cmd);
	if (!*tmp)
	{
		ft_path_clear(path);
		return (EMAF);
	}
	return (0);
}

int	ft_backtrack_step(t_stack *src, t_path *path, t_case *state, int depth)
{
	int			i;
	int			error;
	char		*cmd;
	t_stack		*tmp;

	i = -1;
	while (++i < NB_INTRUCTIONS)
	{
		cmd = ft_getinstruction(path, i, state->size);
		if (!cmd)
			continue ;
		error = ft_prepare_step(&path, &tmp, src, cmd);
		if (error)
			return (error);
		error = ft_backtrack_atomic_case(tmp, path, state, depth + 1);
		ft_stack_clear(&tmp);
		if (error)
			return (EMAF);
		ft_path_removeback(&path);
	}
	return (0);
}
