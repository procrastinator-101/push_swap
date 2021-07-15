/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pair.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 09:52:46 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/15 10:24:13 by yarroubi         ###   ########.fr       */
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



#endif
