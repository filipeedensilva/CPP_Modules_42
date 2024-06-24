CPP = c++

FLAGS = -std=c++98 -g #-Wall -Wextra -Werror

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

RM = rm -rf

NAME = brain

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CPP) $(FLAGS) -c -o $@ $<

att:
	@sed -i "5s,.*,SRC = $$(echo *.cpp)," Makefile

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)
