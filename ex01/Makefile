# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cchen <cchen@student.hive.fi>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/28 14:52:08 by cchen             #+#    #+#              #
#    Updated: 2023/09/28 14:52:54 by cchen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= phonebook

CC			:= clang++
CFLAGS		:= -std=c++98 -Wall -Wextra -Werror
INCLUDES	:= -I./includes

SRC_DIR		:= ./src
OBJ_DIR		:= ./obj
SRCS		:= main.cpp PhoneBook.cpp Contact.cpp List.cpp
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
