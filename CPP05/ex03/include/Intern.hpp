#pragma once

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

// class From;
class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern &src);
        Intern &operator=(const Intern &src);
        ~Intern();
        Form *makeForm(const std::string name, const std::string target);

    class FormNotFoundException : public std::exception {
        public:
            virtual const char *what() const throw();
    };
};