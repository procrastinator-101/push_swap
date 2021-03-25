/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:43:01 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 20:51:23 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "errors.h"
# include "../libft/libft.h"
# include "../stack/stack.h"
# include "../get_next_line/get_next_line.h"
# include "../support_functions/support_functions.h"

int		execute_intruction(char *instruction, t_stack *a, t_stack *b);

void	ft_verbose(t_stack *a, t_stack *b);
void	parser(int fd, t_stack *a, t_stack *b);
void	fill_stack(t_stack *stack, int start, int argc, char **argv);

#endif
