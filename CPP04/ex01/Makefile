NAME = Animal

SRC =	Animal.cpp	\
		Dog.cpp	\
		Cat.cpp	\
		main.cpp \
		WrongAnimal.cpp\
		WrongCat.cpp	\
		Brain.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	Animal.hpp	\
			Dog.hpp		\
			Cat.hpp		\
			WrongAnimal.hpp\
			WrongCat.hpp	\
			Brain.hpp

CC = c++

FLAGS = -Wall -Werror -std=c++98 -fsanitize=address -g

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