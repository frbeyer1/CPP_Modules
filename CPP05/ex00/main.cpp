#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat *a = new Bureaucrat();
    std::cout << a;

    try
    {
        a->incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Incrementing of " << a->getName() << " failed: " << e.what() << std::endl;
    }
    std::cout << a;
}