/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:06:10 by youness           #+#    #+#             */
/*   Updated: 2021/04/06 18:10:44 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORS_H
# define ERRORS_H

# include "../stack/stack.h"
# include "../libft/libft.h"

# define EDUP	-1
# define EIOF	-2
# define EII	-3
# define ENAI	-4

void	manage_error(t_stack *stack, int error);

#endif
