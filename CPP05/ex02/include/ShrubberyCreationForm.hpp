#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class Bureaucrat;
class Form;
class ShrubberyCreationForm : public Form
{
    private:
        const std::string _target;
    public:

        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm &src);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &src);
        ~ShrubberyCreationForm();

        void            execute(Bureaucrat const &executor) const;
        std::string     getTarget(void) const;

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm *a);

#endif