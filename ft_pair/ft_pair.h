/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:52:46 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/28 22:37:29 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PAIR_H
# define FT_PAIR_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_pair
{
	int				first;
	int				second;
	struct s_pair	*next;
	struct s_pair	*previous;
}					t_pair;

void	ft_pair_del(t_pair *node);
void	ft_pair_print(t_pair *tail);
void	ft_pair_clear(t_pair **tail);
void	ft_pair_removeback(t_pair **tail);
void	ft_pair_addback(t_pair **tail, t_pair *node);
void	ft_pair_pushback(t_pair **pairs, int first, int second);

t_pair	*ft_pair_create(int first, int second);

#endif
