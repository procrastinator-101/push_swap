/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 16:11:39 by yarroubi          #+#    #+#             */
/*   Updated: 2021/04/06 22:02:01 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../ft_shared_functions/ft_shared_functions.h"


int		ft_binsearch_index(int *arr, int size, int val);
void	ft_insert_in_stack(t_stack *a, t_stack *b);
void	ft_sort_stack(t_stack *a, t_stack *b);

#endif
