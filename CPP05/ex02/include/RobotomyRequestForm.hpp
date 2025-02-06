#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP
# include <iostream>
# include <fstream>
# include "Form.hpp"

class Bureaucrat;
class Form;
class RobotomyRequestForm : public Form
{
    private:
        std::string _target;
    public:

        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(RobotomyRequestForm &src);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &src);
        ~RobotomyRequestForm();

        void            execute(Bureaucrat const &executor) const;
        std::string     getTarget(void) const;

};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm *a);

#endif