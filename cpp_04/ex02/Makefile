NAME = AAnimal

CC = c++

SRC = src/AAnimal.cpp src/Brain.cpp src/Cat.cpp src/Dog.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/main.cpp

FLAGS = -Wall -Wextra -Werror --std=c++98

OBJS = $(SRC:$(SRC_PATH)%.cpp=$(OBJ_PATH)%.o)

OBJ_PATH = ./obj/
SRC_PATH = ./src/

RM = rm -rf

all: $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

$(OBJS): $(OBJ_PATH)

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
