#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class Bureaucrat{

    private:
        const std::string _name;
        int _grade;

        void setGrade(int grade);

    public:
        Bureaucrat();
        Bureaucrat(const std::string name);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &src);
        ~Bureaucrat();

        void incrementGrade(void);
        void decrementGrade(void);

        const std::string getName(void) const;
        int getGrade(void) const;

        class GradeTooHighException: public std::exception{
            public:
            virtual const char *what() const throw();
        };

        class GradeTooLowException: public std::exception{
            public:
            virtual const char *what() const throw();
        };

        void    signForm(Form &src);
        void    executeForm(Form &form) const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat *a);
#endif