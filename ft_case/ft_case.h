/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:54:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/02 19:57:22 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CASE_H
# define FT_CASE_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include "../ft_solution/ft_solution.h"

typedef struct s_case
{
	int				*arr;
	t_solution		*solutions;
	struct s_case	*next;
	int				size;
	int				max_pathsteps;
}					t_case;

void				ft_case_del(t_case *node);
void				ft_case_print(t_case *tail);
void				ft_case_clear(t_case **tail);
void				ft_case_addback(t_case **tail, t_case *node);
void				ft_case_addfront(t_case **tail, t_case *node);
void				ft_case_addsolution(t_case *node, t_solution *solution);
t_case				*ft_case_create(int *arr, int size, t_solution *solutions);

#endif
