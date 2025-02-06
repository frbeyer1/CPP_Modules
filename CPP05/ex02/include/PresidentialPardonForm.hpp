#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class Bureaucrat;
class Form;
class PresidentialPardonForm : public Form
{
    private:
        std::string _target;
    public:

        PresidentialPardonForm();
        PresidentialPardonForm(const std::string target);
        PresidentialPardonForm(PresidentialPardonForm &src);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &src);
        ~PresidentialPardonForm();

        void            execute(Bureaucrat const &executor) const;
        std::string     getTarget(void) const;

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm &a);

#endif