NAME = Bureaucrat

SRC =	main.cpp		\
		Bureaucrat.cpp	\
		Form.cpp		\
		ShrubberyCreationForm.cpp	\
		RobotomyRequestForm.cpp	\
		PresidentialPardonForm.cpp	\
		Intern.cpp

OBJ = $(SRC:.cpp=.o)

HEADER =	Bureaucrat.hpp	\
			Form.hpp		\
			ShrubberyCreationForm.hpp	\
			RobotomyRequestForm.hpp	\
			PresidentialPardonForm.hpp	\
			Intern.hpp

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