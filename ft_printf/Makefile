# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <agouet@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/30 10:53:37 by agouet            #+#    #+#              #
#    Updated: 2022/03/01 15:43:06 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

LIB_DIR		= libft/

LIBFT 		= libft/libft.a

CFLAGS 		= -MMD -Wall -Wextra -Werror

VPATH 		= srcs

SRCS 		= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putnbr_hx.c ft_putnbr_unsigned.c ft_islower.c ft_isupper.c

INC  		= -I.

OBJS 		= $(SRCS:.c=.o)

DEPS 		= $(SRCS:.c=.d)

all:		$(NAME)

$(LIBFT) : 
		@make -C libft -f Makefile

$(NAME) :	$(OBJS) $(LIBFT) 
		@cp $(LIBFT) ./$(NAME)
		@ar rcs $(NAME) $(OBJS)
		@echo "*Compilation : libftprintf.a"

%.o:	 	%.c 
		@gcc $(CFLAGS) $(INC) -o $@ -c $< 

clean :
		@rm -f $(OBJS) $(DEPS)
		@make -C libft -f Makefile clean

fclean : 	clean
		@rm -f $(NAME)
		@make -C libft -f Makefile fclean
		@echo "Remove libftprintf.a & libft.a"


re : fclean all

test : 
	gcc test.c $(NAME) && ./a.out

.PHONY : all clean fclean re test

-include $(DEPS)
