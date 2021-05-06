# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youness <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 19:52:46 by youness           #+#    #+#              #
#    Updated: 2021/05/05 23:28:12 by youness          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHOR = younes

CC = gcc
CFLAGS = -Wall -Werror -Wextra

CHECKER = checker
PUSH_SWAP = push_swap

NAME = $(CHECKER) $(PUSH_SWAP)

LIBFT_PATH = libft
FT_STACK_PATH = ft_stack
FT_ERRORS_PATH = ft_errors
FT_CHECKER_PATH = ft_checker
FT_PUSH_SWAP_PATH = ft_push_swap
GET_NEXT_LINE_PATH = get_next_line
FT_SUPPORT_FUNCTIONS_PATH = ft_support_functions


LIBFT = $(LIBFT_PATH)/libft.a

LIB = $(LIBFT)

FT_STACK_SRC = $(FT_STACK_PATH)/ft_construct_stack.c \
				  $(FT_STACK_PATH)/ft_destroy_stack.c \
				  $(FT_STACK_PATH)/ft_duplicate_stack.c \
				  $(FT_STACK_PATH)/ft_empty_stack.c \
				  $(FT_STACK_PATH)/ft_is_stack_sorted.c \
				  $(FT_STACK_PATH)/ft_pop.c \
				  $(FT_STACK_PATH)/ft_print_stack.c \
				  $(FT_STACK_PATH)/ft_push.c \
				  $(FT_STACK_PATH)/ft_reverse_rotate_stack.c \
				  $(FT_STACK_PATH)/ft_rotate_stack.c \
				  $(FT_STACK_PATH)/ft_swap_stack.c

FT_SUPPORT_FUNCTIONS_SRC = $(FT_SUPPORT_FUNCTIONS_PATH)/ft_atoi_check_len.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_execute_intruction.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_parse_arguments.c \
						   $(FT_SUPPORT_FUNCTIONS_PATH)/ft_verbose.c

GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c

FT_CHECKER_SRC = $(FT_CHECKER_PATH)/checker.c \
				 $(FT_CHECKER_PATH)/parser.c

FT_PUSH_SWAP_SRC = $(FT_PUSH_SWAP_PATH)/ft_add_front_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_add_next_step.c \
				   $(FT_PUSH_SWAP_PATH)/ft_delete_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_destroy_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_destroy_paths.c \
				   $(FT_PUSH_SWAP_PATH)/ft_get_atomic_solutions.c \
				   $(FT_PUSH_SWAP_PATH)/ft_solve_case.c \
				   $(FT_PUSH_SWAP_PATH)/ft_print_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_sort_stack.c \
				   $(FT_PUSH_SWAP_PATH)/ft_update_solution.c \
				   $(FT_PUSH_SWAP_PATH)/push_swap.c

FT_ERRORS_SRC = $(FT_ERRORS_PATH)/ft_manage_execution_error.c \
				$(FT_ERRORS_PATH)/ft_manage_parsing_error.c

CHECKER_SRC = $(FT_CHECKER_SRC) $(FT_SUPPORT_FUNCTIONS_SRC) $(FT_STACK_SRC) \
			  $(FT_ERRORS_SRC) $(GET_NEXT_LINE_SRC) 

PUSH_SWAP_SRC = $(FT_PUSH_SWAP_SRC) $(FT_SUPPORT_FUNCTIONS_SRC) $(FT_STACK_SRC) \
				$(FT_ERRORS_SRC)

CHECKER_OBJ = $(CHECKER_SRC:.c=.o)
PUSH_SWAP_OBJ = $(PUSH_SWAP_SRC:.c=.o)


all: $(NAME)

$(NAME) : $(CHECKER) $(PUSH_SWAP)

$(CHECKER):$(CHECKER_OBJ) $(CHECKER_HDR) $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(CHECKER_OBJ) $(LIB)

$(PUSH_SWAP):$(PUSH_SWAP_OBJ) $(PUSH_SWAP_HDR) $(LIB)
	@$(CC) $(CFLAGS) -o $@ $(PUSH_SWAP_OBJ) $(LIB)

%.o: %.c
	@$(CC) -o $@ -c $< $(CFLAGS)

$(LIBFT) :
	@$(MAKE) -C libft

clean:
	@rm -rf $(CHECKER_OBJ) $(PUSH_SWAP_OBJ)
	@$(MAKE) -C libft fclean


fclean: clean
	@rm -rf $(NAME)

re: fclean all
