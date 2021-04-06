/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:26:30 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 21:59:00 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_sort_stack(t_stack *a, t_stack *b)
{
	while (a->size > 0)
	{
		if (a->content[a->size - 1] < a->content[a->size - 2])
			execute_intruction("sa", a, b);
		while (a->size > 0 && a->content[a->size - 1] < a->content[0])
			execute_intruction("rra", a, b);
		ft_insert_in_stack(a, b);
	}
	while (b->size > 0)
		execute_intruction("pa", a, b);
}
