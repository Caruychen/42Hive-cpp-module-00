# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 14:50:07 by cchen             #+#    #+#              #
#    Updated: 2023/09/28 14:51:02 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone

CC		:= clang++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror

SRC		:= megaphone.cpp
OBJ		:= $(SRC:.cpp=.o)

.PHONE: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

$(OBJ):$(SRC)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all
