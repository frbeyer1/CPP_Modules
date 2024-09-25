#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>

class Form
{
    private:

        const std::string _name;
        bool    _signed;
        const int _sign_grade;
        const int _execute_grade;

    public:

        constructors
        getter;
        overload<<

    
    
        class GradeTooHighException: public std::exception{
            public:
            virtual const char *what() const throw();
        };
        class GradeTooLowException: public std::exception{
            public:
            virtual const char *what() const throw();
        };
};
#endif