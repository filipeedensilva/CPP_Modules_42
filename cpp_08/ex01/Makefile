CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = src/main.cpp

OBJ = $(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

OBJ_PATH = obj/
SRC_PATH = src/

RM = rm -rf

NAME = main

all : $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp | $(OBJ_PATH)
	@$(CC) $(FLAGS) -c $< -o $@

$(OBJ_PATH):
	@mkdir -p $(OBJ_PATH)

clean:
	@$(RM) $(OBJ_PATH)	

fclean:	clean
	@$(RM) $(NAME)

re:	fclean att all
	clear

att:
	@sed -i "5s,.*,SRC = $$(echo src/*.cpp)," Makefile
