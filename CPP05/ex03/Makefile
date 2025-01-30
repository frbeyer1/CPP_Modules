NAME = Bureaucrat

SRC =	src/main.cpp		\
		src/Bureaucrat.cpp	\
		src/Form.cpp		\
		src/ShrubberyCreationForm.cpp	\
		src/RobotomyRequestForm.cpp	\
		src/PresidentialPardonForm.cpp	\
		src/Intern.cpp

OBJ = $(SRC:.cpp=.o)

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98 -I./include
# FLAGS = -Wall -Wextra -Werror -std=c++98 -I./include -g -fsanitize=address

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