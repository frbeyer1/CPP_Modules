#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
		a->executeForm(*b);
		// b->execute(*a);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
	}
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout <<rrf;
	// try
	// {
	// 	b->beSigned(*a);
	// 	b->execute(*a);
	// }
	// catch(Bureaucrat::GradeTooLowException &e)
	// {
	// 	std::cerr << "\033[33m" << a->getName() << " was not able to sign " << b->getName() << ": " << e.what() << "\033[0m" << std::endl;
	// }
	// std::cout << b;
	std::cout << std::endl;
	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	delete a;
	delete b;
	delete rrf;
	std::cout << std::endl;
};

// still error when enter invalid form in makeform