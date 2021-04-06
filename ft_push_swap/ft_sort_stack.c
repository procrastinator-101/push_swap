/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:26:30 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 18:15:17 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_sort_stack(t_stack *a, t_stack *b)
{
	while (a->size > 0)
	{
		if (a->content[a->size - 1] < a->content[a->size - 2])
			execute_intruction(a, b, "sa");
		while (size > 0 && a->content[a->size - 1] < a->content[0])
			execute_intruction(a, b, "rra");
		ft_insert_in_stack(b, "b", ft_pop(a));
	}
	while (b->size > 0)
		execute_intruction(a, b, "pa");
}
