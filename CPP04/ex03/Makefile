NAME = Interface

SRC =	main.cpp	\
		AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\

OBJ = $(SRC:.cpp=.o)

HEADER =	AMateria.hpp\
			ICharacter.hpp\

CC = c++

FLAGS = -Wall -Werror -std=c++98 -g

RM = rm -f

all:$(NAME)

$(NAME): $(OBJ) $(HEADER)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re