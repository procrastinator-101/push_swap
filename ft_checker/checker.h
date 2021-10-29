/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 18:43:01 by youness           #+#    #+#             */
/*   Updated: 2021/10/29 12:23:40 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "../ft_stack/ft_stack.h"
# include "../ft_errors/ft_errors.h"
# include "../get_next_line/get_next_line.h"
# include "../ft_support_functions/ft_support_functions.h"

void	parser(int fd, t_stack *a, t_stack *b);

#endif
