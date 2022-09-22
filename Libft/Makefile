# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 20:17:24 by rvela-fe          #+#    #+#              #
#    Updated: 2022/09/22 19:34:41 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h

NAME = libft.a

SRCS = ft_strlcat.c ft_strlen.c ft_strncmp.c ft_toupper.c ft_tolower.c \
	   ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c

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
