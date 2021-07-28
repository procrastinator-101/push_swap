/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_by_atomics.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 12:30:22 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 23:08:20 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_sort_by_atomics(t_container *a, t_container *b, t_case *atomics)
{
	int			size;
	int			*sequence;
	t_case		*states[2];
	t_pair		*upper_chunk;
	t_solution	*solution;

	upper_chunk = a->chunks->previous;
	size = upper_chunk->second - upper_chunk->first;
	sequence = ft_getsequence(a->stack->data + upper_chunk->first, size);
	states[0] = ft_casefind_sequence(atomics, sequence, size, DESCENDANT);
	free(sequence);
	if (b->chunks)
	{
		upper_chunk = b->chunks->previous;
		size = upper_chunk->second - upper_chunk->first;
		sequence = ft_getsequence(a->stack->data + upper_chunk->first, size);
		states[1] = ft_casefind_sequence(atomics, sequence, size, ASCENDANT);
		free(sequence);
		solution = ft_solution_intersect(states[0]->solutions, states[1]->solutions);
		ft_solution_print(solution);
		ft_solution_del(solution);
	}
	else
		ft_solution_print(states[0]->solutions);
	return (0);
}
