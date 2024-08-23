SRC = megaphone.cpp
OBJ = $(SRC:.cpp=.o)
CC = c++
FLAGS = -Wall -Werror -std=c++98
RM = rm -f

NAME = megaphone

all:$(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re