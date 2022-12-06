#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.barcel>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 00:28:44 by rvela-fe          #+#    #+#              #
#    Updated: 2022/12/06 11:34:37 by rvela-fe         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
HEADER = libft.h

CC = gcc
FLAGS = -Wall -Werror -Wextra
AR = ar -rcs
RM = rm -f

SRCS = ft_strlcat.c ft_strlen.c ft_strncmp.c \
		ft_toupper.c ft_tolower.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_strlcpy.c ft_strchr.c \
		ft_strrchr.c ft_strnstr.c ft_memchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c \
		ft_memmove.c ft_memcmp.c ft_atoi.c \
		ft_calloc.c ft_strdup.c ft_striteri.c \
		ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

OBJS = $(SRCS:.c=.o)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -I./ -c $< -o $@

all: $(NAME)

$(NAME): ${OBJS} ${HEADER}
	$(AR) $(NAME) $?

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
