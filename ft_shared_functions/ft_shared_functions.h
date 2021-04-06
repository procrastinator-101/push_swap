/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shared_functions.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:46:40 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 22:04:30 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SHARED_FUNCTIONS_H
# define FT_SHARED_FUNCTIONS_H

# include "errors.h"
# include "../libft/libft.h"
# include "../stack/stack.h"
# include "../support_functions/support_functions.h"

int	count;

int		execute_intruction(char *instruction, t_stack *a, t_stack *b);

void	ft_verbose(t_stack *a, t_stack *b, char *instruction);
void	fill_stack(t_stack *stack, int start, int argc, char **argv);

#endif
