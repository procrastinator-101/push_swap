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

static char	*ft_getinstruction(int index)
{
	if (index == 0)
		return ("ra");
	if (index == 1)
		return ("sa");
	return ("rra");
}

static int	ft_update_path(t_path **path, int index)
{
	int		ra;
	int		rra;
	char	*instruction;
	t_path	*head;

	instruction = ft_getinstruction(index);
	if (index == 2)
	{
		ra = 0;
		rra = 0;
		head = *path;
		while (head)
		{
			if (!ft_strcmp(head->str, "rra"))
				rra++;
			else if (!ft_strcmp(head->str, "ra"))
				ra++;
			head = head->next;
		}
		if (ra <= rra)
			return (0);
	}
	ft_path_pushback(path, instruction);
	if (!*path)
		return (EMAF);
	return (1);
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

int	ft_backtrack_step(t_stack *src, t_path *path, t_case *state, int depth)
{
	int			i;
	int			error;
	t_stack		*tmp;

	i = -1;
	while (++i < NB_INTRUCTIONS)
	{
		error = ft_update_path(&path, i);
		if (!error || error == EMAF)
			return (error);
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
