NAME = phonebook

CPP = c++

SRC = main.cpp \
	  PhoneBook.cpp \
	  Contact.cpp

OBJ = $(SRC:.cpp=.o)

FLAGS = -std=c++98 -g -Wall -Wextra -Werror 

RM = rm -rf

all:	$(NAME)

$(NAME): $(OBJ)
	$(CPP) $(FLAGS) $(OBJ) -o $(NAME)

%.o : %.cpp
	@$(CPP) $(FLAGS) -c -o $@ $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re:	fclean $(NAME)
