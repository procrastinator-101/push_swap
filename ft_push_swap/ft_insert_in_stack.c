/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_in_stack.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:14:45 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 17:26:03 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ft_insert_in_stack(t_stack *stack, char *stack_name, int value)
{
	int	i;
	int	dst_index;

	dst_index = ft_binsearch_index(stack->content, stack->size, value);
	printf("index = %d\n", dst_index);
	if (dst_index > stack->size / 2)
	{
		i = dst_index - 1;
		while (++i < stack->size)
			printf("r%s\n", stack_name);
		printf("p%s\n", stack_name);
		while (--i >= dst_index)
			printf("rr%s\n", stack_name);
	}
	else
	{
		i = -1;
		while (++i < dst_index)
			printf("rr%s\n", stack_name);
		printf("p%s\n", stack_name);
		while (i-- >= 0)
			printf("r%s\n", stack_name);
	}
}
