# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: spatel <sonyaspatel@outlook.com>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/21 13:55:19 by spatel            #+#    #+#              #
#    Updated: 2023/05/21 13:55:19 by spatel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

CC = gcc
CFLAGS = -Wall -Werror -Wextra -g -std=c99
MAKEFLAGS += --warn-undefined-variables
	# is this being used

SRC_PATH = src/
SRC_FILES = main.c

SRC = $(addprefix $(SRC_PATH), $(SRC_FILES))

all:
	$(CC) $(CFLAGS) $(SRC) -I ./includes/ -o $(NAME)

clean:
	rm-rf $(NAME) $(OBJ)
	# clean objects??

fclean: clean

re: fclean all

.PHONY: all clean fclean re
.SHELLFLAGS := -eu -o pipefail -C
	# Bash strict mode prevents subtle bugs
.DELETE_ON_ERROR: