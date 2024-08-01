NAME = Animal

SRC =	animal.cpp	\
		Dog.cpp	\
		Cat.cpp	\
		main.cpp \
		WrongAnimal.cpp\
		WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	animal.hpp	\
			Dog.hpp		\
			Cat.hpp		\
			WrongAnimal.hpp\
			WrongCat.hpp

CC = g++

FLAG = -Wall -Werror -std=c++98

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