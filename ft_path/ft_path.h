/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:56:40 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/01 11:34:44 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATH_H
# define FT_PATH_H

# include <stdio.h>
# include <stdlib.h>

# include "../libft/libft.h"
# include "../ft_matrix/ft_matrix.h"

typedef struct s_path
{
	char			*str;
	struct s_path	*next;
}					t_path;

void				ft_path_print(t_path *tail);
void				ft_path_del(t_path *node);
void				ft_path_clear(t_path **tail);
void				ft_path_removeback(t_path **tail);
void				ft_path_pushback(t_path **path, char *str);
void				ft_path_addfront(t_path **tail, t_path *node);
void				ft_path_addback(t_path **tail, t_path *node);

int					ft_path_size(t_path *path);
int					ft_path_isportable(t_path *path);
int					ft_getcandidate(t_matrix *mat, int i, int j);

t_path				*ft_path_create(char *str);
t_path				*ft_path_clone(t_path *src);
t_path				*ft_path_intersect(t_path *p1, t_path *p2);
t_matrix			*ft_path_getintersection_matrix(t_path *p1, t_path *p2);

#endif
