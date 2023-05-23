# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/05 22:33:32 by rvela-fe          #+#    #+#              #
#    Updated: 2023/04/05 22:36:12 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
HEADER = ft_printf.h

CC = gcc
FLAGS = -Wall -Werror -Wextra
AR = ar -rcs
RM = rm -f

SRCS = 	ft_printf.c ft_pointer.c ft_putchar.c \
		ft_putnbr.c ft_putstr.c ft_putunsignednb.c \
		ft_hexadecimal.c

OBJS = $(SRCS:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${HEADER}
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re