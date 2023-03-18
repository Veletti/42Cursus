# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rvela-fe <rvela-fe@student.42barcelona.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/06 00:28:44 by rvela-fe          #+#    #+#              #
#    Updated: 2023/03/18 01:31:47 by rvela-fe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		=	libft.a
INCLUDES	=	../include
SRCS_DIR	=	src/
OBJS_DIR	=	obj/
CC 			= 	gcc
FLAGS 		= 	-Wall -Werror -Wextra -I
AR 			= 	ar rcs
RM 			= 	rm -rf

#CHECK FOLDER
CHECK_DIR	= check/
SRC_CHECK	= ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

#MEMORY FOLDER
MEM_DIR		= memory/
SRC_MEM		= ft_bzero ft_calloc ft_memcmp ft_memcpy ft_memchr ft_memmove ft_memset

#PRINT FOLDER
PRINT_DIR	= print/
SRC_PRINT	= ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

#STRING FOLDER
STRING_DIR	= string/
SRC_STRING	= ft_atoi ft_itoa ft_split ft_strchr ft_strdup ft_striteri ft_strjoin\
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr\
				ft_strtrim ft_strrchr ft_substr ft_tolower ft_toupper

#ALL SOURCES
SRC_FILES+=$(addprefix $(CHECK_DIR),$(SRC_CHECK))
SRC_FILES+=$(addprefix $(MEM_DIR),$(SRC_MEM))
SRC_FILES+=$(addprefix $(PRINT_DIR),$(SRC_PRINT))
SRC_FILES+=$(addprefix $(STRING_DIR),$(SRC_STRING))

SRCS		=	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS		=	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

OBJSF	=	.cache_exists

all:	$(NAME)

$(NAME):	$(OBJS)
		@$(AR) $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "Libft compiled!"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c | $(OBJSF)
		@echo "Compiling:"
		@$(CC) $(FLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
		@mkdir -p $(OBJS_DIR)
		@mkdir -p $(OBJS_DIR)$(CHECK_DIR)
		@mkdir -p $(OBJS_DIR)$(MEM_DIR)
		@mkdir -p $(OBJS_DIR)$(PRINT_DIR)
		@mkdir -p $(OBJS_DIR)$(STRING_DIR)

clean:
		@$(RM) $(OBJS_DIR)
		@echo "Libft objects files cleaned!"

fclean: clean
		@$(RM) $(NAME)
		@echo "Libft executable files cleaned!"

re: fclean all
		@echo "Cleaned and rebuilt everything for libft"

norm:
		@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

.PHONY: all clean fclean re norm
