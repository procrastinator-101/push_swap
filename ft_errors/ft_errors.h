/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:06:10 by youness           #+#    #+#             */
/*   Updated: 2021/11/04 16:42:26 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERRORS_H
# define FT_ERRORS_H

# include "../libft/libft.h"
# include "../ft_stack/ft_stack.h"

# define EDUP	-1
# define EIOF	-2
# define EII	-3
# define EIA	-4
# define EMAF	-5
# define ENAN	-6

# define ECNF   -7
# define EUCC   -8

void	ft_print_error_msg(int error);
void	ft_manage_parsing_error(t_stack *stack, int error);

#endif
