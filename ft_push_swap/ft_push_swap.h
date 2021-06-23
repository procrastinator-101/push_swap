/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:47:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/06/23 16:08:44 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_stack/ft_stack.h"
# include "../ft_errors/ft_errors.h"
# include "../ft_support_functions/ft_support_functions.h"

int		ft_append_permutation(t_list **permutations, int *arr, int size);

t_list	*ft_generate_permutations(int *arr, int size);

#endif
