CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRC = src/main.cpp src/BitcoinExchange.cpp

OBJ = $(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

OBJ_PATH = obj/
SRC_PATH = src/

RM = rm -rf

NAME = btc

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp | $(OBJ_PATH)
	$(CC) $(FLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean:
	@$(RM) $(OBJ_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	clear
