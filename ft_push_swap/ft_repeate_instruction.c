/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_repeate_instruction.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:12:54 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 16:05:30 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_repeate_instruction(t_stack *a, t_stack *b, int times, char *instruction)
{
	int	ret;

	ret = 0;
	while (times--)
	{
		ret = ft_execute_intruction(a, b, instruction);
		if (ret)
			break ;
		printf("%s\n", instruction);
	}
	return (ret);
}
