# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youness <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 19:52:46 by youness           #+#    #+#              #
#    Updated: 2021/05/02 16:28:52 by yarroubi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

AUTHOR = younes

CC = gcc
CFLAGS = -Wall -Werror -Wextra

CHECKER = checker
PUSH_SWAP = push_swap

NAME = $(CHECKER) $(PUSH_SWAP)

LIBFT_PATH = libft
STACK_PATH = stack
FT_CHECKER_PATH = ft_checker
FT_PUSH_SWAP_PATH = ft_push_swap
GET_NEXT_LINE_PATH = get_next_line
SUPPORT_FUNCTIONS_PATH = support_functions
FT_SHARED_FUNCTIONS_PATH = ft_shared_functions

LIBFT = $(LIBFT_PATH)/libft.a

LIB = $(LIBFT)

STACK_SRC = $(STACK_PATH)/ft_construct_stack.c \
			$(STACK_PATH)/ft_destroy_stack.c \
			$(STACK_PATH)/ft_duplicate_stack.c \
			$(STACK_PATH)/ft_empty_stack.c \
			$(STACK_PATH)/ft_is_stack_sorted.c \
			$(STACK_PATH)/ft_pop.c \
			$(STACK_PATH)/ft_print_stack.c \
			$(STACK_PATH)/ft_push.c \
			$(STACK_PATH)/ft_reverse_rotate_stack.c \
			$(STACK_PATH)/ft_rotate_stack.c \
			$(STACK_PATH)/ft_swap_stack.c

SUPPORT_FUNCTIONS_SRC = $(SUPPORT_FUNCTIONS_PATH)/ft_atoi_check.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_dmax.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_dmin.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_isnumber.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_issign.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_max.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_min.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_strcmp.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_strrstr.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_umax.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_umin.c

GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c

FT_SHARED_FUNCTIONS_SRC = $(FT_SHARED_FUNCTIONS_PATH)/execute_intruction.c \
						  $(FT_SHARED_FUNCTIONS_PATH)/fill_stack.c \
						  $(FT_SHARED_FUNCTIONS_PATH)/ft_verbose.c \
						  $(FT_SHARED_FUNCTIONS_PATH)/manage_error.c

FT_CHECKER_SRC = $(FT_CHECKER_PATH)/checker.c \
				 $(FT_CHECKER_PATH)/parser.c

FT_PUSH_SWAP_SRC = $(FT_PUSH_SWAP_PATH)/ft_add_front_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_add_next_step.c \
				   $(FT_PUSH_SWAP_PATH)/ft_delete_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_destroy_lst_solution.c \
				   $(FT_PUSH_SWAP_PATH)/ft_destroy_paths.c \
				   $(FT_PUSH_SWAP_PATH)/ft_get_atomic_solutions.c \
				   $(FT_PUSH_SWAP_PATH)/ft_solve_case.c \
				   $(FT_PUSH_SWAP_PATH)/ft_sort_stack.c \
				   $(FT_PUSH_SWAP_PATH)/push_swap.c

CHECKER_SRC = $(FT_CHECKER_SRC) $(FT_SHARED_FUNCTIONS_SRC) $(STACK_SRC) \
			  $(GET_NEXT_LINE_SRC) $(SUPPORT_FUNCTIONS_SRC)

PUSH_SWAP_SRC = $(FT_PUSH_SWAP_SRC) $(FT_SHARED_FUNCTIONS_SRC) $(STACK_SRC) \
				$(SUPPORT_FUNCTIONS_SRC)

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
