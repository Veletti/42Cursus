# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 20:17:24 by rvela-fe          #+#    #+#              #
#    Updated: 2022/10/13 16:22:15 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h

NAME = libft.a

SRCS = ft_strlcat.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_strlcpy.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_memchr.c \
		ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Werror -Wextra

$(NAME): ${OBJS} ${HEADER}
	ar -rcs $(NAME) $(OBJS)

all: $(NAME)

%.o: %.c ${HEADER}
	${CC} ${FLAGS} -I./ -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
