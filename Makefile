# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youness <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 19:52:46 by youness           #+#    #+#              #
#    Updated: 2021/10/29 18:53:13 by yarroubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHOR = younes

CC = gcc
CFLAGS = -Wall -Werror -Wextra #-fsanitize=address

CHECKER = checker
PUSH_SWAP = push_swap

NAME = $(PUSH_SWAP) $(CHECKER)

LIBFT_PATH = libft
FT_PATH_PATH = ft_path
FT_CASE_PATH = ft_case
FT_PAIR_PATH = ft_pair
FT_STACK_PATH = ft_stack
FT_ERRORS_PATH = ft_errors
FT_MATRIX_PATH = ft_matrix
FT_CONTAINER_PATH = ft_container
FT_SOLUTION_PATH = ft_solution
FT_PUSH_SWAP_PATH = ft_push_swap
FT_SUPPORT_FUNCTIONS_PATH = ft_support_functions


FT_CHECKER_PATH = ft_checker
GET_NEXT_LINE_PATH = get_next_line

LIBFT = $(LIBFT_PATH)/libft.a

LIB = $(LIBFT)

FT_STACK_SRC = $(FT_STACK_PATH)/ft_stack_clear.c \
			   $(FT_STACK_PATH)/ft_stack_clone.c \
			   $(FT_STACK_PATH)/ft_stack_create.c \
			   $(FT_STACK_PATH)/ft_stack_empty.c \
			   $(FT_STACK_PATH)/ft_stack_issorted.c \
			   $(FT_STACK_PATH)/ft_stack_pop.c \
			   $(FT_STACK_PATH)/ft_stack_print.c \
			   $(FT_STACK_PATH)/ft_stack_push.c \
			   $(FT_STACK_PATH)/ft_stack_reverse_rotate.c \
			   $(FT_STACK_PATH)/ft_stack_rotate.c \
			   $(FT_STACK_PATH)/ft_stack_swap.c

FT_CASE_SRC = $(FT_CASE_PATH)/ft_case_addback.c \
			  $(FT_CASE_PATH)/ft_case_addsolution.c \
			  $(FT_CASE_PATH)/ft_case_addfront.c \
			  $(FT_CASE_PATH)/ft_case_clear.c \
			  $(FT_CASE_PATH)/ft_case_create.c \
			  $(FT_CASE_PATH)/ft_case_del.c \
			  $(FT_CASE_PATH)/ft_casefind_sequence.c \
			  $(FT_CASE_PATH)/ft_case_print.c

FT_SOLUTION_SRC = $(FT_SOLUTION_PATH)/ft_solution_addback.c \
				  $(FT_SOLUTION_PATH)/ft_solution_addfront.c \
				  $(FT_SOLUTION_PATH)/ft_solution_clear.c \
				  $(FT_SOLUTION_PATH)/ft_solution_create.c \
				  $(FT_SOLUTION_PATH)/ft_solution_del.c \
				  $(FT_SOLUTION_PATH)/ft_solution_intersect.c \
				  $(FT_SOLUTION_PATH)/ft_solution_intersect_path.c \
				  $(FT_SOLUTION_PATH)/ft_solution_print.c \
				  $(FT_SOLUTION_PATH)/ft_solution_remove_shadows.c

FT_PATH_SRC = $(FT_PATH_PATH)/ft_getcandidate.c \
			  $(FT_PATH_PATH)/ft_path_addback.c \
			  $(FT_PATH_PATH)/ft_path_addfront.c \
			  $(FT_PATH_PATH)/ft_path_clear.c \
			  $(FT_PATH_PATH)/ft_path_clone.c \
			  $(FT_PATH_PATH)/ft_path_create.c \
			  $(FT_PATH_PATH)/ft_path_del.c \
			  $(FT_PATH_PATH)/ft_path_getintersection_matrix.c \
			  $(FT_PATH_PATH)/ft_path_intersect.c \
			  $(FT_PATH_PATH)/ft_path_isportable.c \
			  $(FT_PATH_PATH)/ft_path_print.c \
			  $(FT_PATH_PATH)/ft_path_pushback.c \
			  $(FT_PATH_PATH)/ft_path_removeback.c \
			  $(FT_PATH_PATH)/ft_path_size.c

FT_MATRIX_SRC = $(FT_MATRIX_PATH)/ft_matrix_clear.c \
				$(FT_MATRIX_PATH)/ft_matrix_create.c \
				$(FT_MATRIX_PATH)/ft_matrix_nclear.c \
				$(FT_MATRIX_PATH)/ft_matrix_print.c

FT_PAIR_SRC = $(FT_PAIR_PATH)/ft_pair_addback.c \
			  $(FT_PAIR_PATH)/ft_pair_clear.c \
			  $(FT_PAIR_PATH)/ft_pair_create.c \
			  $(FT_PAIR_PATH)/ft_pair_del.c \
			  $(FT_PAIR_PATH)/ft_pair_print.c \
			  $(FT_PAIR_PATH)/ft_pair_pushback.c \
			  $(FT_PAIR_PATH)/ft_pair_removeback.c

FT_CONTAINER_SRC = $(FT_CONTAINER_PATH)/ft_container_create.c \
				   $(FT_CONTAINER_PATH)/ft_container_del.c \
				   $(FT_CONTAINER_PATH)/ft_container_pop.c \
				   $(FT_CONTAINER_PATH)/ft_container_print.c \
				   $(FT_CONTAINER_PATH)/ft_container_push.c

FT_SUPPORT_FUNCTIONS_SRC = $(FT_SUPPORT_FUNCTIONS_PATH)/ft_atoi_check_len.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_execute_intruction.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_parse_arguments.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_verbose.c

GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c

FT_CHECKER_SRC = $(FT_CHECKER_PATH)/checker.c \
				 $(FT_CHECKER_PATH)/parser.c

FT_PUSH_SWAP_SRC = $(FT_PUSH_SWAP_PATH)/ft_append_permutation.c \
				   $(FT_PUSH_SWAP_PATH)/ft_arr_to_stack.c \
				   $(FT_PUSH_SWAP_PATH)/ft_backtrack_atomic_case.c \
				   $(FT_PUSH_SWAP_PATH)/ft_backtrack_step.c \
				   $(FT_PUSH_SWAP_PATH)/ft_chunkate.c \
				   $(FT_PUSH_SWAP_PATH)/ft_construct_cases.c \
				   $(FT_PUSH_SWAP_PATH)/ft_generate_permutations.c \
				   $(FT_PUSH_SWAP_PATH)/ft_getatomic_solutions.c \
				   $(FT_PUSH_SWAP_PATH)/ft_getncases.c \
				   $(FT_PUSH_SWAP_PATH)/ft_getsequence.c \
				   $(FT_PUSH_SWAP_PATH)/ft_initialise_cases.c \
				   $(FT_PUSH_SWAP_PATH)/ft_initialise_container.c \
				   $(FT_PUSH_SWAP_PATH)/ft_isforeign.c \
				   $(FT_PUSH_SWAP_PATH)/ft_manage_execution_error.c \
				   $(FT_PUSH_SWAP_PATH)/ft_median.c \
				   $(FT_PUSH_SWAP_PATH)/ft_printsolutions_intersections.c \
				   $(FT_PUSH_SWAP_PATH)/ft_push_swap.c \
				   $(FT_PUSH_SWAP_PATH)/ft_repeate_instruction.c \
				   $(FT_PUSH_SWAP_PATH)/ft_send_chunk.c \
				   $(FT_PUSH_SWAP_PATH)/ft_solve_atomic_case.c \
				   $(FT_PUSH_SWAP_PATH)/ft_sort_by_atomics.c \
				   $(FT_PUSH_SWAP_PATH)/ft_sort.c

FT_ERRORS_SRC = $(FT_ERRORS_PATH)/ft_manage_parsing_error.c \
				$(FT_ERRORS_PATH)/ft_print_error_msg.c

CHECKER_SRC = $(FT_CHECKER_SRC) $(FT_SUPPORT_FUNCTIONS_SRC) $(FT_STACK_SRC) \
			  $(FT_ERRORS_SRC) $(GET_NEXT_LINE_SRC) 

PUSH_SWAP_SRC = $(FT_PUSH_SWAP_SRC) $(FT_SUPPORT_FUNCTIONS_SRC) \
				$(FT_CONTAINER_SRC) $(FT_PAIR_SRC) $(FT_STACK_SRC) \
				$(FT_CASE_SRC) $(FT_SOLUTION_SRC) $(FT_PATH_SRC) \
				$(FT_MATRIX_SRC) $(FT_ERRORS_SRC)

CHECKER_OBJ = $(CHECKER_SRC:.c=.o)
PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:.c=.o)


all: $(NAME)

$(CHECKER):$(CHECKER_OBJ) $(CHECKER_HDR) $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(CHECKER_OBJ) $(LIB)

$(PUSH_SWAP):$(PUSH_SWAP_OBJ) $(PUSH_SWAP_HDR) $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(PUSH_SWAP_OBJ) $(LIB)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

$(LIBFT) :
	@$(MAKE) -C libft

clean:
	@rm -rf $(PUSH_SWAP_OBJ) $(CHECKER_OBJ)
	@$(MAKE) -C libft fclean


fclean: clean
	@rm -rf $(NAME)

re: fclean all
