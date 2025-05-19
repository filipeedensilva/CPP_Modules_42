CC = c++

FLAGS = -Wall -Wextra -Werror -g -std=c++98

SRC = src/main.cpp src/PmergeMe.cpp

OBJ_PATH = obj/
SRC_PATH = src/

OBJ = $(SRC:$(SRC_PATH)/%.cpp=$(OBJ_PATH)%.o)

RM = rm -rf

NAME = PmergeMe

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp | $(OBJ_PATH)
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean: 
	@$(RM) $(OBJ_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
	clear
