/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_container.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 10:53:12 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/29 12:10:18 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CONTAINER_H
# define FT_CONTAINER_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# include "../ft_pair/ft_pair.h"
# include "../ft_stack/ft_stack.h"
# include "../ft_errors/ft_errors.h"

typedef struct s_container
{
	t_pair	*chunks;
	t_stack	*stack;
	char	name;
}			t_container;

void		ft_container_print(t_container *node);
void		ft_container_del(t_container *node);

int			ft_container_pop(t_container *container);
int			ft_container_push(t_container *container, int value, int ischunk);

t_container	*ft_container_create(t_stack *stack, t_pair *chunks, char name);

#endif
