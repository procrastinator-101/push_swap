/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 22:47:28 by youness           #+#    #+#             */
/*   Updated: 2021/03/20 00:57:34 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "stdio.h"
# include "stdlib.h"

# define ASCENDANT			0
# define DESCENDANT			1
# define MIN_STACK_SIZE		100

typedef struct	s_stack
{
	int			*content;
	int			size;
}				t_stack;

int				ft_pop(t_stack *stack);
int				ft_push(t_stack *stack, int value);
int				ft_is_stack_sorted(t_stack *stack, int order);

void			ft_swap_stack(t_stack *stack);
void			ft_print_stack(t_stack *stack);
void			ft_rotate_stack(t_stack *stack);
void			construct_stack(t_stack *stack);
void			ft_destroy_stack(t_stack *stack);
void			ft_reverse_rotate_stack(t_stack *stack);

#endif
