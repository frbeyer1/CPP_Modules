#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try {
		Bureaucrat *a = new Bureaucrat("Karen", 1);
		Form *b = new PresidentialPardonForm("default");
		// Form *b = new RobotomyRequestForm("ROBOT");
		// Form *b = new ShrubberyCreationForm("some trees");
		std::cout << a;
		std::cout << b;
		try
		{
			a->signForm(*b);
			a->executeForm(*b);
		}
		catch(Bureaucrat::GradeTooLowException &e)
		{
			std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
		}
		std::cout << std::endl;
		delete a;
		delete b;
		std::cout << std::endl;
	}
	catch(std::exception &e)
    {
        std::cerr << "Creation of Bureaucrat failed: " << e.what() << std::endl;
        
    }
}
