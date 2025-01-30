#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Intern Default Constructor " << std::endl;
};

Intern::Intern(const Intern &src){
    std::cout << "Intern Copy Constructor " << std::endl;
    *this = src;
};

Intern &Intern::operator=(const Intern &src){
    std::cout << "Intern Assignment Operator " << std::endl;
    if(this == &src)
        return(*this);
    return *this;
};

Intern::~Intern(){
    std::cout << "Intern Destructor " << std::endl;
};

static Form *makePresident(const std::string target){
    return (new PresidentialPardonForm(target));
}
static Form *makeRobot(const std::string target){
    return (new RobotomyRequestForm(target));
}
static Form *makeShrubbery(const std::string target){
    return (new ShrubberyCreationForm(target));
}

Form *Intern::makeForm(const std::string name, const std::string target){

    Form *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
    std::string forms[] = {"presidential pardon", "robotomy request", "shrubbery creation"};


    try {
        for (int i = 0; i < 3; i++)
        {
            if(name == forms[i])
            {
                std::cout << "Intern creates " << name << std::endl;
                return (all_forms[i](target));
            }
        }
        throw FormNotFoundException();
    }
    catch (const FormNotFoundException& e) {
        std::cerr << "Error: " << e.what() << ". Intern can't create Form " << name << std::endl;
        return NULL;
    }
};

const char *Intern::FormNotFoundException::what() const throw(){
    return "Form not found";
};