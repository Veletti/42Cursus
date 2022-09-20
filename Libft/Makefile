# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/20 20:17:24 by rvela-fe          #+#    #+#              #
#    Updated: 2022/09/20 21:25:13 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = libft.h

NAME = libft.a

SRCS = ft_strlcat.c ft_strlen.c

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
