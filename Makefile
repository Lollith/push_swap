# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 15:26:52 by agouet            #+#    #+#              #
#    Updated: 2022/03/21 12:12:56 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

LIBFTPRINTF	= ft_printf/libftprintf.a

LIB_DIR		= ./ft_printf/

LIB_DIR_LFT	= ./ft_printf/libft

SRCS_PATH	= ./sources/

SRCS		= $(addprefix $(SRCS_PATH), push_swap_main.c \
			ft_radix.c \
			push_swap_utils.c \
			push_swap_operations.c \
			ft_short_sort.c \
			push_swap_operations_print.c \
			push_swap_checker.c) 
			

OBJS		= $(SRCS:.c=.o)

DEPS		= $(SRCS:.c=.d)

CC			= cc

CFLAGS		= -MMD -Wall -Wextra -Werror -g

INC			= -I ./includes -I $(LIB_DIR) -I $(LIB_DIR_LFT) 

all:		$(NAME)


$(NAME):	$(OBJS) $(LIBFTPRINTF)
		@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -L $(LIB_DIR) -lftprintf -L $(LIB_DIR_LFT) -lft
		@echo "*Compilation : push_swap"

%.o:		%.c
			@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(LIBFTPRINTF):
		@make --no-print-directory -C ft_printf

clean:
		@rm -f $(OBJS) $(DEPS)
		@make --no-print-directory clean -C ft_printf -f Makefile

fclean:		clean
		@rm -f $(NAME)
		@make --no-print-directory fclean -C $(LIB_DIR)
		@echo "*Remove push_swap.exe libftprintf.a"

re:		fclean all

.PHONY:		all re clean fclean test

-include $(DEPS)

