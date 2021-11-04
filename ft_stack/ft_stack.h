/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/02 15:36:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/11/04 16:41:41 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdio.h>
# include <stdlib.h>

# include "../libft/libft.h"

# define ASCENDANT			0
# define DESCENDANT			1
# define MIN_STACK_SIZE		100

typedef struct s_stack
{
	int			*data;
	int			end;
	int			size;
}				t_stack;

int				ft_stack_pop(t_stack *stack);
int				ft_stack_push(t_stack *stack, int value);

void			ft_stack_swap(t_stack *stack);
void			ft_stack_rotate(t_stack *stack);
void			ft_stack_reverse_rotate(t_stack *stack);

void			ft_stack_print(t_stack *stack);
void			ft_stack_empty(t_stack *stack);
void			ft_stack_clear(t_stack **stack);

int				ft_stack_issorted(t_stack *stack, int order);

t_stack			*ft_stack_create(void);
t_stack			*ft_stack_clone(t_stack *src);

#endif
