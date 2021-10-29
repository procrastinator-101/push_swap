/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yarroubi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/23 14:47:06 by yarroubi          #+#    #+#             */
/*   Updated: 2021/10/29 19:32:36 by yarroubi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "../libft/libft.h"
# include "../ft_errors/ft_errors.h"
# include "../ft_support_functions/ft_support_functions.h"

# include "../ft_pair/ft_pair.h"
# include "../ft_case/ft_case.h"
# include "../ft_stack/ft_stack.h"
# include "../ft_matrix/ft_matrix.h"
# include "../ft_container/ft_container.h"

# define MAX_DEPTH			12
# define ATOMIC_SIZE		4
# define NB_INTRUCTIONS		3

typedef struct s_data
{
	int	ret;
	int	end;
	int	start;
	int	ischunk;
	int	middle_cost;
}		t_data;

int			ft_sort(t_container *a, t_container *b, t_case *atomics);
int			ft_sort_by_atomics(t_container *a, t_container *b, t_case *atomics);

int			ft_append_permutation(t_list **permutations, int *arr, int size);

t_list		*ft_generate_permutations(int *arr, int size);

t_case		*ft_getncases(int n);
t_case		*ft_initialise_cases(void);
t_case		*ft_construct_cases(t_list *permutations, int size);
t_case		*ft_getatomic_solutions(t_case *cases);

int			*ft_getsequence(int *arr, int size);
int			ft_median(int *arr, int size, int *error);
t_stack		*ft_arr_to_stack(int *arr, int size);

int			ft_solve_atomic_case(t_case *node);
int			ft_backtrack_step(t_stack *src, t_path *path, t_case *state, \
			int depth);
int			ft_backtrack_atomic_case(t_stack *src, t_path *path, t_case *state, \
			int depth);

t_container	*ft_initialise_container(char name);

void		ft_getcontainers(t_container **a, t_container **b, int argc, \
			char **argv);

void		ft_printsolutions_intersections(t_case *cases);

int			ft_isforeign(int num, char name, int median);
int			ft_chunkate(t_container *src, t_container *dst);
int			ft_send_chunk(t_container *src, t_container *dst, int median);

int			ft_repeate_instruction(t_stack *a, t_stack *b, int times, \
			char *instruction);

void		ft_manage_execution_error(t_container *a, t_container *b, \
			int error);

#endif
