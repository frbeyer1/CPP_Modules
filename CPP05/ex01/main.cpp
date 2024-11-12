#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    // Bureaucrat *a = new Bureaucrat();

    Bureaucrat a("lol", 30);
    std::cout << a;
    Form A("Formular", 24, 45);

    try
    {
        a.incrementGrade();
    }
    catch(Bureaucrat::GradeTooHighException &e)
    {
        std::cerr << "Incrementing of " << a.getName() << " failed: " << e.what() << std::endl;
    }
    a.signForm(A);
    std::cout << a;
}
