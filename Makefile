# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgarse <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 15:07:03 by lgarse            #+#    #+#              #
#    Updated: 2019/10/20 16:00:41 by lgarse           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS += -Wall -Wextra -Werror -g

SRC = blanc.c brute_force.c check_put.c checkin1.c checkin2.c checkin3.c \
        clear_tet.c dimens.c ft_read.c ft_sqrt.c ft_tet_char.c tet_free.c\
        ft_x.c ft_y.c main.c print_sq.c tostruct.c tostruct2.c sq_free.c \
		organ.c \

OBJ = $(SRC:.c=.o)

LIBFT = libft/libft.a

.PHONY = all clean fclean clean re

all: $(NAME)

$(OBJ): %.o: %.c
	@gcc -c $(FLAGS) $< -o $@

$(LIBFT):
	@make -C libft

$(NAME): $(LIBFT) $(OBJ)
	@gcc $(OBJ) $(LIBFT) -o $(NAME)
	@echo "\033[32mCompiled Executable\033[0m"

clean:
	@rm -rf $(OBJ)
	@make -C libft clean
	@echo "\033[32mRemoved Object Files\033[0m"

fclean: clean
	@rm -rf $(NAME)
	@make -C libft fclean
	@echo "\033[32mRemoved Executable\033[0m"

re: fclean all
