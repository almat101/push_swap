# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amatta <amatta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/01 12:43:21 by amatta            #+#    #+#              #
#    Updated: 2023/08/07 14:16:28 by amatta           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

CC = gcc

FLAGS = # -Wall -Wextra -Werror

SRCS =  main.c utils.c checker.c error.c stack_fun.c init_stack.c moves_push.c moves_rotate.c moves_swap.c

RM = rm -rf

LIBFT = ./libft/libft.a

FT_PRINTF = ./ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	make -C libft
	make -C ft_printf
	$(CC) $(FLAGS) -o $(NAME) $(OBJS) $(LIBFT) $(FT_PRINTF)
#-fsanitize=address

clean:
		make clean -C libft
		make clean -C ft_printf
		$(RM) $(OBJS)

fclean: clean
		make fclean -C libft
		make fclean -C ft_printf
		$(RM) $(NAME)

re : fclean all

.PHONY: all, clean, fclean, re


