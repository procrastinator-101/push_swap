/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:11:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/05/02 16:39:57 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_shared_functions/ft_shared_functions.h"

# define MAX_INSTRUCTIONS	10

typedef struct s_path
{
	t_list				*instruction;
	struct s_path		*next;
}						t_path;

typedef struct s_solution
{
	t_list				*paths;
	t_stack				*stack;
	int					nb_instuctions;
	struct s_solution	*next;
}						t_solution;

void		ft_destroy_lst_solution(t_solution **solution);
void		ft_destroy_paths(t_list **paths);
void		ft_delete_lst_solution(t_solution **solution);
void		ft_add_next_step(t_list **path, int index);
void		ft_add_front_lst_solution(t_solution **tail, t_solution *new);

t_solution	*ft_get_case_solution(t_stack *src);
t_solution	*ft_get_atomic_solutions(t_stack *src);

int			ft_solve_case(t_solution *solution, t_stack *src, t_list *path, \
			int nb_instuctions);

#endif
