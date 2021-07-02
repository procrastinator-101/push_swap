/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:47:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/07/02 19:53:56 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_case/ft_case.h"
# include "../ft_stack/ft_stack.h"
# include "../ft_errors/ft_errors.h"
# include "../ft_matrix/ft_matrix.h"
# include "../ft_support_functions/ft_support_functions.h"

# define NB_INTRUCTIONS		3
# define MAX_DEPTH			8

int			ft_append_permutation(t_list **permutations, int *arr, int size);

t_list		*ft_generate_permutations(int *arr, int size);

t_case		*ft_getncases(int n);
t_case		*ft_initialise_cases(void);
t_case		*ft_construct_cases(t_list *permutations, int size);
t_case		*ft_getatomic_solutions(t_case *cases);

int			*ft_getsequence(int *arr, int size);
int			ft_median(int *arr, int size, int *error);

int			ft_solve_atomic_case(t_case *node);
int			ft_backtrack_atomic_case(t_stack *src, t_path *path, t_case *state, \
			int depth);

t_stack		*ft_arr_to_stack(int *arr, int size);

#endif
