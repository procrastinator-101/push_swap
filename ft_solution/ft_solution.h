/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:15:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 12:26:04 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLUTION_H
# define FT_SOLUTION_H

# include <stdio.h>
# include <stdlib.h>
# include "../ft_path/ft_path.h"

typedef struct s_solution
{
	t_path				*path;
	struct s_solution	*next;
	int					nb_steps;
}						t_solution;

void					ft_solution_print(t_solution *tail);
void					ft_solution_del(t_solution *node);
void					ft_solution_clear(t_solution **tail);
void					ft_solution_addfront(t_solution **tail, t_solution \
						*node);
void					ft_solution_addback(t_solution **tail, t_solution \
						*node);
t_solution				*ft_solution_create(t_path *path);

#endif
