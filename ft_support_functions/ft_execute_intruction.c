/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_execute_intruction.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:22:00 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 19:07:16 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_support_functions.h"

static int	ft_execute_rotations(t_stack *a, t_stack *b, char *instruction)
{
	if (!ft_strcmp(instruction, "ra"))
		ft_stack_rotate(a);
	else if (!ft_strcmp(instruction, "rb"))
		ft_stack_rotate(b);
	else if (!ft_strcmp(instruction, "rr"))
	{
		ft_stack_rotate(a);
		ft_stack_rotate(b);
	}
	else if (!ft_strcmp(instruction, "rra"))
		ft_stack_reverse_rotate(a);
	else if (!ft_strcmp(instruction, "rrb"))
		ft_stack_reverse_rotate(b);
	else if (!ft_strcmp(instruction, "rrr"))
	{
		ft_stack_reverse_rotate(a);
		ft_stack_reverse_rotate(b);
	}
	else
		return (EII);
	return (0);
}

int	ft_execute_intruction(t_stack *a, t_stack *b, char *instruction)
{
	if (!ft_strcmp(instruction, "sa"))
		ft_stack_swap(a);
	else if (!ft_strcmp(instruction, "sb"))
		ft_stack_swap(b);
	else if (!ft_strcmp(instruction, "ss"))
	{
		ft_stack_swap(a);
		ft_stack_swap(b);
	}
	else if (!ft_strcmp(instruction, "pa"))
	{
		if (b->end)
			return (ft_stack_push(a, ft_stack_pop(b)));
	}
	else if (!ft_strcmp(instruction, "pb"))
	{
		if (a->end)
			return (ft_stack_push(b, ft_stack_pop(a)));
	}
	else
		return (ft_execute_rotations(a, b, instruction));
	return (0);
}
