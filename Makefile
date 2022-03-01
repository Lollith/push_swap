# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 15:26:52 by agouet            #+#    #+#              #
#    Updated: 2022/03/01 15:52:12 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

LIBFTPRINTF	= ft_printf/libftprintf.a

SRCS_PATH	= ./sources/

SRCS		= $(addprefix $(SRCS_PATH), push_swap_main.c \
			ft_radix.c \
			push_swap_utils.c \
			push_swap_operations.c \
			ft_short_sort.c)

OBJS		= $(SRCS:.c=.o)

DEPS		= $(SRCS:.c=.d)


CC		= gcc

CFLAGS		= -MMD -Wall -Wextra -Werror

INC		= -I ./includes

all:		$(NAME)


$(NAME):	$(OBJS) $(LIBFTPRINTF)
		@cp $(LIBFTPRINTF) ./$(NAME)
		@ar rcs $(NAME) $(OBJS)
		@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
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
		@make --no-print-directory fclean -C ft_printf 
		@echo "*Remove push_swap.exe libftprintf.a"

re:		fclean all

.PHONY:		all re clean fclean test

-include $(DEPS)

