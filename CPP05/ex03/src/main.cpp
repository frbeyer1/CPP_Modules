#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern		bob;
		Form		*form;
		Bureaucrat	karen("Karen", 50);

		std::cout << std::endl;
		try
		{
			form = bob.makeForm("robotomy request", "Alice");
			delete form;
			form = bob.makeForm("shrubbery creation", "Charlie");
			delete form;
			form = bob.makeForm("presidential pardon", "David");
			delete form;
			form = bob.makeForm("random request", "Elisa");
			delete form;
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
		std::cout << std::endl;
		form = bob.makeForm("shrubbery creation", "Fred");
		try{
			karen.signForm(*form);
			karen.executeForm(*form);
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
		delete form;
		std::cout << std::endl;
		form = bob.makeForm("presidential pardon", "Georgia");
		try{
			karen.signForm(*form);
			karen.executeForm(*form);
		}
		catch (std::exception &e)
		{
			std::cout << "Caught exception: " << e.what() << std::endl;
		}
		delete form;
	}
	catch(std::exception &e)
    {
        std::cerr << "Creation of Bureaucrat failed: " << e.what() << std::endl;
        
    }
	return (0);

};

// still error when enter invalid form in makeform