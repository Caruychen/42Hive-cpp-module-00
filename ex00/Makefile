NAME := megaphone

CC := clang++
CFLAGS := -std=c++98 -Wall -Wextra -Werror

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

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
