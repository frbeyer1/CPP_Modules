#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat *a = new Bureaucrat("worker", 151);
        std::cout << a;
        try
        {
            a->incrementGrade();
        }
        catch(std::exception &e)
        {
            std::cerr << "Incrementing of " << a->getName() << " failed: " << e.what() << std::endl;
        }
        std::cout << a;
        delete a;
    }
    catch(std::exception &e)
    {
        std::cerr << "Creation of Bureaucrat failed: " << e.what() << std::endl;
        
    }
}