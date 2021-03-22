# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: youness <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/22 19:52:46 by youness           #+#    #+#              #
#    Updated: 2021/03/22 23:56:06 by youness          ###   ########.fr        #
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
CHECKER_PATH = checker
GET_NEXT_LINE_PATH = get_next_line
SUPPORT_FUNCTIONS_PATH = support_functions

LIBFT = $(LIBFT_PATH)/libft.a

LIB = $(LIBFT)

STACK_SRC = $(STACK_PATH)/construct_stack.c \
			$(STACK_PATH)/ft_destroy_stack.c \
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
						$(SUPPORT_FUNCTIONS_PATH)/ft_strrstr.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_umax.c \
						$(SUPPORT_FUNCTIONS_PATH)/ft_umin.c

GET_NEXT_LINE_SRC = $(GET_NEXT_LINE_PATH)/get_next_line.c \
					$(GET_NEXT_LINE_PATH)/get_next_line_utils.c

CHECKER_SRC = $(STACK_SRC) $(SUPPORT_FUNCTIONS_SRC) $(GET_NEXT_LINE_SRC) \
			  $(CHECKER_PATH)/checker.c \
			  $(CHECKER_PATH)/execute_intruction.c \
			  $(CHECKER_PATH)/fill_stack.c \
			  $(CHECKER_PATH)/manage_error.c \
			  $(CHECKER_PATH)/parser.c

PUSH_SWAP_SRC = 

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
	@rm -rf $(CHECKER_OBJ) $(PUSH_SWAP_OBJ)
	@$(MAKE) -C libft fclean


fclean: clean
	@rm -rf $(NAME)

re: fclean all
