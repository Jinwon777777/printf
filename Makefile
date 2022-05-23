# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiha <jiha@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 14:39:42 by jiha              #+#    #+#              #
#    Updated: 2022/05/23 15:07:33 by jiha             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs


SRCS 	= 	srcs/countlen.c \
			srcs/ft_printf.c \
			srcs/printchar.c \
			srcs/printhex.c \
			srcs/printint.c \
			srcs/printptr.c \
			srcs/printstr.c \
			srcs/printu.c

OBJS = $(SRCS:.c=.o)
$(NAME) : $(OBJS)
		$(AR) $@ $^

all : $(NAME)
%.o : %.c
		$(CC) $(CFLAGS) -c $< -o $@
clean :
		$(RM) $(OBJS)
fclean : clean
		$(RM) $(NAME)
re : fclean all
.PHONY : all clean fclean re