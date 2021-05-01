/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:11:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/01 17:04:27 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_shared_functions/ft_shared_functions.h"

typedef struct s_path
{
	t_list			*instruction;
	struct s_path	*next;
}				t_path;

typedef struct	s_solution
{
	t_list	*paths;
	t_stack	stack;
}				t_solution;

void	ft_sort_stack(t_stack *a, t_stack *b);

void	ft_get_solutions(t_stack stack, char instructions_set[3][4], \
        char *instructions, int nb_instuctions, t_solution *solution);

#endif
