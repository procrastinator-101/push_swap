/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_support_functions.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 17:47:24 by youness           #+#    #+#             */
/*   Updated: 2021/07/15 13:44:39 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUPPORT_FUNCTIONS_H
# define FT_SUPPORT_FUNCTIONS_H

# include <limits.h>
# include "../libft/libft.h"
# include "../ft_errors/ft_errors.h"

int		ft_atoi_check_len(char *str, int *error, int *len);
int		ft_execute_intruction(t_stack *a, t_stack *b, char *instruction);

void	ft_verbose(t_stack *a, t_stack *b, char *instruction);
void	ft_parse_arguments(t_stack *stack, int argb, int argc, char **argv);

#endif
