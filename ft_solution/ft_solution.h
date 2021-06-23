/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solution.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 18:15:57 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:28:05 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SOLUTION_H
# define FT_SOLUTION_H

typedef struct s_solution
{
	char				*str;
	struct s_solution	*next;
}						t_solution;

void					ft_solution_print(t_solution *tail);
void					ft_solution_del(t_solution *node);
void					ft_solution_clear(t_solution **tail);
void					ft_solution_addfront(t_solution **tail, t_solution \
						*node);
void					ft_solution_addback(t_solution **tail, t_solution \
						*node);
t_solution				*ft_solution_create(char *str);

#endif
