NAME = PmergeMe

SRC =	src/main.cpp	\
		src/PmergeMe.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

# FLAGS = -Wall -Wextra -Werror -std=c++98 -g -I./include -fsanitize=address
FLAGS = -Wall -Wextra -Werror -std=c++98 -I./include

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