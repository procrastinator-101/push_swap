/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 19:56:40 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 19:57:28 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PATH_H
# define FT_PATH_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_path
{
	char			*str;
	struct s_path	*next;
}					t_path;

void				ft_path_print(t_path *tail);
void				ft_path_del(t_path *node);
void				ft_path_clear(t_path **tail);
void				ft_path_addfront(t_path **tail, t_path *node);
void				ft_path_addback(t_path **tail, t_path *node);
t_path				*ft_path_create(char *str);

#endif
