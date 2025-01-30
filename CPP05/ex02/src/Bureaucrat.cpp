#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("default"), _grade(150){
    std::cout<<"Default Constructor "<< this->getName() << " with grade " << this->getGrade() <<std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy): _name(copy.getName() + "_copy"){
    std::cout << "Copy Constructor " << copy.getName() << " into " << this->getName() << std::endl;
    *this = copy;
};

Bureaucrat::Bureaucrat(int grade): _name("default"){
    std::cout << "Constructor for " << this-> getName() << " with grade " << grade << std::endl;
    this->setGrade(grade);
};

Bureaucrat::Bureaucrat(const std::string name): _name(name), _grade(150){
    std::cout << "Constructor for " << this->getName() << " with grade " << this->_grade << std::endl;
};

Bureaucrat::Bureaucrat(const std::string name, int grade): _name(name){
    std::cout << "Constructor for " << this->getName() << " with grade " << grade << std::endl;
    this->setGrade(grade);
};

Bureaucrat::~Bureaucrat(){
    std::cout << "Deconstructor for " << this->getName() << std::endl;
};

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src){
    std::cout << "Assignation operator called" << std::endl;
    if(this == &src)
        return *this;
    this->_grade = src.getGrade();
    return *this;
};

void Bureaucrat::incrementGrade(void){
    std::cout << "incrementing grade of " << this->getName() << std::endl;
    this->setGrade(this->_grade - 1);
};

void Bureaucrat::decrementGrade(void){
    std::cout << "decrementing grade of " << this->getName() << std::endl;
    this->setGrade(this->_grade + 1);
};

const std::string Bureaucrat::getName(void) const{
    return(this->_name);
};

int Bureaucrat::getGrade(void) const{
    return(this->_grade);
};

void Bureaucrat::setGrade(int grade)
{
    if(grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade = grade;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw(){
    return ("Grade too high");
};

const char *Bureaucrat::GradeTooLowException::what(void) const throw(){
    return ("Grade too low");
};

std::ostream &operator<<(std::ostream &o, Bureaucrat *a)
{
    o << "Bureaucrat " << a->getName() << ": Grade - " << a->getGrade() << std::endl;
    return(o);
}

void    Bureaucrat::signForm(Form &src)
{
    if(src.is_signed() == true)
        std::cout<<this->_name<<" couldn't sign "<<src.getName()<< ", because its already signed";
    try
    {
        src.beSigned(*this);
        std::cout<<this->_name<<" signed "<<src.getName()<<std::endl;
    }
    catch (std::exception& e)
    {
        std::cout<<this->_name<<" couldn't sign "<<src.getName()<< ", because "<< e.what()<< std::endl;
    }
};

void    Bureaucrat::executeForm(Form &form) const{
    form.execute(*this);
};