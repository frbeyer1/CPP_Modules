NAME = MutantStack

SRC =	src/main.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

# FLAGS = -Wall -Wextra -Werror -std=c++98 -g -fsanitize=address -I./inc
FLAGS = -Wall -Wextra -Werror -std=c++98 -I./inc

RM = rm -f

all:$(NAME)

$(NAME): $(OBJ)
		@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) $(FLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re