/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:43:01 by youness           #+#    #+#             */
/*   Updated: 2021/03/25 19:11:06 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "errors.h"
# include "../libft/libft.h"
# include "../stack/stack.h"
# include "../get_next_line/get_next_line.h"
# include "../support_functions/support_functions.h"

void	fill_stack(t_stack *stack, int start, int argc, char **argv);

#endif
