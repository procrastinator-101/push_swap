/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_by_atomics.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:30:22 by yarroubi          #+#    #+#             */
/*   Updated: 2021/11/04 15:53:02 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_update_cmd(char *cmd, char *str, int ismutant)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == 'a' && ismutant)
			cmd[i] = 'b';
		else
			cmd[i] = str[i];
	}
	cmd[i] = 0;
}

static int	ft_execute_atomic_solution(t_container *a, t_container *b, \
			t_solution *solution, int ismutant)
{
	int		ret;
	char	cmd[4];
	t_path	*head;

	if (!solution)
		return (0);
	head = solution->path;
	while (head)
	{
		ft_update_cmd(cmd, head->str, ismutant);
		ret = ft_execute_intruction(a->stack, b->stack, cmd);
		if (ret)
			return (ret);
		printf("%s\n", cmd);
		head = head->next;
	}
	return (0);
}

static t_case	*ft_getupperchunk_sequence_case(t_container *container, \
				t_case *atomics, int order, int *error)
{
	int		size;
	int		*sequence;
	t_pair	*upper_chunk;
	t_case	*ret;

	*error = 0;
	upper_chunk = container->chunks->previous;
	size = upper_chunk->second - upper_chunk->first;
	sequence = ft_getsequence(container->stack->data + upper_chunk->first, \
		size);
	if (!sequence)
	{
		*error = EMAF;
		return (0);
	}
	ret = ft_casefind_sequence(atomics, sequence, size, order);
	free(sequence);
	if (ret)
		return (ret);
	*error = ECNF;
	return (0);
}

static int	ft_execute_right_solution(t_container *a, t_container *b, \
			t_case *states[2])
{
	int			ret;
	t_solution	*solution;

	ret = 0;
	if (!states[0]->solutions)
		ret = ft_execute_atomic_solution(a, b, states[1]->solutions, 1);
	else if (!states[1]->solutions)
		ret = ft_execute_atomic_solution(a, b, states[0]->solutions, 0);
	else
	{
		solution = ft_solution_intersect(states[0]->solutions, \
			states[1]->solutions);
		if (!solution)
			return (EMAF);
		ret = ft_execute_atomic_solution(a, b, solution, 0);
		ft_solution_del(solution);
	}
	return (ret);
}

int	ft_sort_by_atomics(t_container *a, t_container *b, t_case *atomics)
{
	int			error;
	t_case		*states[2];

	states[0] = ft_getupperchunk_sequence_case(a, atomics, ASCENDANT, &error);
	if (error)
		return (error);
	if (b->chunks)
	{
		states[1] = ft_getupperchunk_sequence_case(b, atomics, DESCENDANT, \
			&error);
		if (error)
			return (error);
		return (ft_execute_right_solution(a, b, states));
	}
	return (ft_execute_atomic_solution(a, b, states[0]->solutions, 0));
}
