NAME = Animal

SRC =	Animal.cpp	\
		Dog.cpp	\
		Cat.cpp	\
		main.cpp \
		WrongAnimal.cpp\
		WrongCat.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	Animal.hpp	\
			Dog.hpp		\
			Cat.hpp		\
			WrongAnimal.hpp\
			WrongCat.hpp

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -f

all:$(NAME)

$(NAME): $(OBJ) $(HEADER)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re