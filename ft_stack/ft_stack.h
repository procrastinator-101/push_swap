/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:36:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/05 20:38:38 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdio.h>
# include <stdlib.h>

# define ASCENDANT			0
# define DESCENDANT			1
# define MIN_STACK_SIZE		100

typedef struct s_stack
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
void			ft_empty_stack(t_stack *stack);
void			ft_destroy_stack(t_stack **stack);
void			ft_reverse_rotate_stack(t_stack *stack);

t_stack			*ft_construct_stack(void);
t_stack			*ft_duplicate_stack(t_stack *src);

#endif
