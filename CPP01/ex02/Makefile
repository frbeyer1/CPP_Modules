NAME = HithisisBrain

SRC =	main.cpp

OBJ = $(SRC:.cpp=.o)

CC = g++

FLAG = -Wall -Werror -std=c++98

RM = rm -f

all:$(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re