# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 14:57:01 by cchen             #+#    #+#              #
#    Updated: 2023/09/28 14:57:22 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= dreamer

CC			:= clang++
CFLAGS		:= -std=c++98 -Wall -Wextra -Werror
INCLUDES	:= -I./includes

SRC_DIR		:= ./src
OBJ_DIR		:= ./obj
SRCS		:= tests.cpp Account.cpp
OBJS		:= $(SRCS:%.cpp=$(OBJ_DIR)/%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all
