#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    // Bureaucrat *a = new Bureaucrat();

    // Bureaucrat a("lol", 30);
    // std::cout << a;
    // Form A("Formular", 24, 45);

    // try
    // {
    //     a.incrementGrade();
    // }
    // catch(Bureaucrat::GradeTooHighException &e)
    // {
    //     std::cerr << "Incrementing of " << a.getName() << " failed: " << e.what() << std::endl;
    // }
    // a.signForm(A);
    // std::cout << a;

    std::cout << "\033[34mConstructing\033[0m" << std::endl;
	Bureaucrat *a = new Bureaucrat(1);
	// Form *b = new PresidentialPardonForm("default");
	// Form *b = new RobotomyRequestForm();
	Form *b = new ShrubberyCreationForm();
	std::cout << std::endl;
	std::cout << "\033[34mTesting\033[0m" << std::endl;
	std::cout << a;
	std::cout << b;
	try
	{
		b->beSigned(*a);
		b->execute(*a);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
	}
	// try
	// {
	// 	b->beSigned(*a);
	// 	b->execute(*a);
	// }
	// catch(Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// }
	std::cout << b;
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete a;
	delete b;
	std::cout << std::endl;
}
