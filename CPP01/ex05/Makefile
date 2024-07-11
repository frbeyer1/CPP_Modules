NAME = Harl

SRC =	harl.cpp	\
		main.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	harl.hpp

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