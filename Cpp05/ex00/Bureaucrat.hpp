#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>

class Bureaucrat{

    private:
    std::string _name;
    int _scrore;

    public:
    void GradeTooHighException();
    void GradeTooLowException();
};
#endif