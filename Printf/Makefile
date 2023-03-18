# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 00:28:44 by rvela-fe          #+#    #+#              #
#    Updated: 2023/03/18 01:36:29 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libftprintf.a
INCLUDES	=	include
LIBFT		=	libft
SRCS_DIR	=	src/
OBJS_DIR	=	obj/
CC 			= 	gcc
FLAGS 		= 	-Wall -Werror -Wextra -I
AR 			= 	ar rcs
RM 			= 	rm -rf

#SOURCES
SRC_FILES	=	ft_count ft_hexadecimal ft_pointer ft_printf ft_putunsignednb

SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF	=	.cache_exists

all:	$(NAME)

$(NAME):	$(OBJS)
		@make -C $(LIBFT)
		@$(AR) $(NAME) $(OBJS)
		@echo "Printf compiled!"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJSF)
		@echo "Compiling:"
		@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
		@mkdir -p $(OBJS_DIR)

clean:
		@$(RM) $(OBJS_DIR)
		@make clean -C $(LIBFT)
		@echo "Printf object files cleaned!"

fclean: clean
		@$(RM) $(NAME)
		@$(RM) $(LIBFT)/libft.a
		@echo "Printf executable files cleaned!"
		@echo "Libft executable files cleaned!"

re: fclean all
		@echo "Cleaned and rebuilt everything for Printf"

norm:
		@norminette $(SRCS) $(INCLUDES) $(LIBFT) | grep -v Norme -B1 || true

.PHONY: all clean fclean re norm
