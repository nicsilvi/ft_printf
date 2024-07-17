# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smercado <smercado@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 16:23:55 by smercado          #+#    #+#              #
#    Updated: 2024/07/08 11:35:31 by smercado         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEAD = ft_printf.h
SRC = ft_printf.c hexa.c numbers.c pointers.c unsigned.c

OBJS = ${SRC:.c=.o}

AR = ar rcs
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RANLIB = ranlib

all : $(NAME)

$(NAME):	$(OBJS) $(HEAD)
	$(AR) $(NAME) $(OBJS)
	$(RANLIB) $(NAME)

%.o : %.c $(HEAD) Makefile
		$(CC) -I. $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
