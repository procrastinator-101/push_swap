/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 17:54:31 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 18:18:30 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CASE_H
# define FT_CASE_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_case
{
	int				size;
	int				*arr;
	t_solution		*solutions;
	struct s_case	*next;
}					t_case;

void				ft_case_del(t_case *node);
void				ft_case_print(t_case *tail);
void				ft_case_clear(t_case **tail);
void				ft_case_addback(t_case **tail, t_case *node);
void				ft_case_addfront(t_case **tail, t_case *node);
t_case				*ft_case_create(int *arr, int size, t_solution *solutions);

#endif
