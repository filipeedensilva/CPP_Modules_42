NAME = zombiezzz

CPP = c++

SRC = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -g #-Wall -Wextra -Werror

RM = rm -rf

all:	$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

att:
	@sed -i "5s,.*,SRCS = $$(echo *.cpp)," Makefile

re: fclean $(NAME)
