/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 19:06:10 by youness           #+#    #+#             */
/*   Updated: 2021/10/24 18:38:48 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERRORS_H
# define FT_ERRORS_H

# include "../ft_stack/ft_stack.h"
# include "../libft/libft.h"

# define EDUP	-1			//DUPLICATE NUMBER FOUND
# define EIOF	-2			//INTEGER OVERFLOW
# define EII	-3			//ERROR UNKNOWEN INSTRUCTION
# define EIA	-4			//INVALID ARGUMENT
# define EMAF	-5			//ERROR MEMORY ALLOCATION FAILURE
# define ENAN	-6			//ERROR NOT A NUMBER

# define ECNF   -7			//ERROR CASE NOT FOUND
# define EUCC   -8			//ERROR UNCHUNKABLE CONTAINER

void	ft_print_error_msg(int error);
void	ft_manage_parsing_error(t_stack *stack, int error);
void	ft_manage_execution_error(t_stack *a, t_stack *b, int error);

#endif
