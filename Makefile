# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anesteru <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/05 15:37:28 by anesteru          #+#    #+#              #
#    Updated: 2018/01/05 15:37:34 by anesteru         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

SRC_FILES	=	ft_printf.c		put_unsigned_num.c		put_signed_num.c \
				put_wide.c		ft_atoi.c				put_space_or_zero.c \
				put_str_char.c	num_len.c				initialize_structure.c \
				is_type.c		n_type.c

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror

SRC_DIR		=	./src/
OBJ_DIR		= 	./object_files/
INC_DIR		=	./includes/

OBJ			=	$(addprefix $(OBJ_DIR), $(SRC_FILES:.c=.o))

NO_COLOUR	=	\033[0m
BLUE		=	\033[3;36m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "${BLUE}Compiling $(NAME) with $(FLAGS) flags ${NO_COLOUR}\n..."
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "${BLUE}Done!${NO_COLOUR}"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo "${BLUE}Folder with object files has been removed.${NO_COLOUR}"

fclean: clean
	@/bin/rm -f .DS*
	@/bin/rm -f $(NAME)
	@echo "${BLUE}${NAME} has been removed.${NO_COLOUR}"

re: fclean all

.PHONY: all clean fclean re
