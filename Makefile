# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/22 15:26:52 by agouet            #+#    #+#              #
#    Updated: 2022/02/22 17:10:08 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

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


$(NAME):	$(OBJS)
			$(CC) $(FLAGS) -o $(NAME) $(OBJS)

%.o:		%.c
			$(CC) $(CFLAGS) -c $< -o $@ $(INC)


clean:
		rm -f $(OBJS) $(DEPS)

fclean:		clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all re clean fclean test

-include $(DEPS)

