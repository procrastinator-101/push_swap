/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_intruction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:22:00 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 21:23:26 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

static int	execute_rotations(char *instruction, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(instruction, "ra"))
		ft_rotate_stack(a);
	else if (!ft_strcmp(instruction, "rb"))
		ft_rotate_stack(b);
	else if (!ft_strcmp(instruction, "rr"))
	{
		ft_rotate_stack(a);
		ft_rotate_stack(b);
	}
	else if (!ft_strcmp(instruction, "rra"))
		ft_reverse_rotate_stack(a);
	else if (!ft_strcmp(instruction, "rrb"))
		ft_reverse_rotate_stack(b);
	else if (!ft_strcmp(instruction, "rrr"))
	{
		ft_reverse_rotate_stack(a);
		ft_reverse_rotate_stack(b);
	}
	else
		return (EII);
	return (0);
}

int			execute_intruction(char *instruction, t_stack *a, t_stack *b)
{
	if (!ft_strcmp(instruction, "sa"))
		ft_swap_stack(a);
	else if (!ft_strcmp(instruction, "sb"))
		ft_swap_stack(b);
	else if (!ft_strcmp(instruction, "ss"))
	{
		ft_swap_stack(a);
		ft_swap_stack(b);
	}
	else if (!ft_strcmp(instruction, "pa"))
	{
		if (b->size)
			ft_push(a, ft_pop(b));
	}
	else if (!ft_strcmp(instruction, "pb"))
	{
		if (a->size)
			ft_push(b, ft_pop(a));
	}
	else
		return (execute_rotations(instruction, a, b));
	return (0);
}
