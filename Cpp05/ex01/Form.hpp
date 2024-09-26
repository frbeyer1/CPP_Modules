#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
    private:

        const std::string   _name;
        bool                _signed;
        const int           _sign_grade;
        const int           _execute_grade;

    public:

        Form();
        Form(const std::string name);
        Form(const std::string name, const int sign_grade, const int exec_grade);
        Form(const Form &copy);
        Form &operator=(const Form &src);
        ~Form();

        const std::string getName(void) const;
        size_t  getExecuteGrade(void) const;
        size_t  getSignGrade(void) const;
        void    beSigned(Bureaucrat &src);
        bool    is_signed(void) const;

        class GradeTooHighException: public std::exception{
            public:
            virtual const char *what() const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
            virtual const char *what() const throw();
        };

};

std::ostream &operator<<(std::ostream &o, Form *a);

#endif