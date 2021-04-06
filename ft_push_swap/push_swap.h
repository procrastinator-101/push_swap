/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:11:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 16:25:02 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "errors.h"
# include "../libft/libft.h"
# include "../stack/stack.h"
# include "../support_functions/support_functions.h"

void	ft_verbose(t_stack *a, t_stack *b);
void	fill_stack(t_stack *stack, int start, int argc, char **argv);

#endif
