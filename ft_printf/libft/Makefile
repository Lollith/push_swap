# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agouet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 12:16:27 by agouet            #+#    #+#              #
#    Updated: 2022/03/01 15:39:30 by agouet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CFLAGS		= -MMD -Wall -Wextra -Werror

SRCS		= ft_memset.c ft_bzero.c ft_calloc.c ft_memcpy.c ft_memmove.c ft_memcmp.c ft_memchr.c \
	   ft_isdigit.c ft_isalpha.c ft_isalnum.c ft_isprint.c ft_isascii.c ft_strlen.c ft_toupper.c  ft_tolower.c \
	   ft_strdup.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strnstr.c ft_strncmp.c ft_strlcat.c ft_atoi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c ft_putendl_fd.c \
	   ft_substr.c ft_strjoin.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_split.c ft_itoa.c 

SRCS_B 		= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

INC		= -I.

OBJS 		= $(SRCS:.c=.o)

OBJS_B 		= $(SRCS_B:.c=.o)

DEPS		= $(SRCS:.c=.d)

all : 		$(NAME)     

bonus : 	$(NAME) $(OBJS_B) 
		@ar rcs $(NAME) $(OBJS_B)

$(NAME): 	$(OBJS)
		@ar rc $(NAME) $(OBJS) 
		@ranlib $(NAME)                 
		@echo "*Compilation : libft.a"

%.o:		%.c
		@gcc -o $@  -c $< $(CFLAGS) $(INC)

clean :
		@rm -f $(OBJS) $(OBJS_B) $(DEPS)

fclean : 	clean                        
		@rm -f $(NAME) 
		@echo "*Remove libft.a"
                
re : fclean all
                   
.PHONY : bonus all clean fclean re

-include $(DEPS)
