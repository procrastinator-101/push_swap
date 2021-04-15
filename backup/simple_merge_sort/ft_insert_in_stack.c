/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_in_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:14:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 21:55:39 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_insert_in_stack(t_stack *a, t_stack *b)
{
	int	i;
	int	dst_index;

	dst_index = ft_binsearch_index(b->content, b->size, a->content[a->size - 1]);
	printf("index = %d\n", dst_index);
	if (dst_index > b->size / 2)
	{
		i = dst_index - 1;
		while (++i < b->size)
		{
			execute_intruction("rb", a, b);
			//printf("rb\n");
		}
		execute_intruction("pb", a, b);
		//printf("p%s\n", b_name);
		while (--i >= dst_index)
		{
			//printf("rr%s\n", b_name);
			execute_intruction("rrb", a, b);
		}
	}
	else
	{
		i = -1;
		while (++i < dst_index)
		{
			//printf("rr%s\n", b_name);
			execute_intruction("rrb", a, b);
		}
		//printf("p%s\n", b_name);
		execute_intruction("pb", a, b);
		while (i-- >= 0)
		{
			execute_intruction("rb", a, b);
			//printf("rb\n");
		}
	}
}
