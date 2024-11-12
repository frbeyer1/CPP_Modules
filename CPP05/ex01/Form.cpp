#include "Form.hpp"

Form::Form(): _name("default"), _signed(false), _sign_grade(150), _execute_grade(150){
    std::cout<<"Form -"<<this->_name<<"- signing min. grade: "<<this->_sign_grade<<" executing min. grade: "<<this->_execute_grade<<std::endl;
};

Form::Form(const std::string name): _name(name), _signed(false), _sign_grade(150), _execute_grade(150){
    std::cout<<"Form Constructor -"<<this->_name<<"- signing min. grade: "<<this->_sign_grade<<" executing min. grade: "<<this->_execute_grade<<std::endl;
};

Form::Form(const std::string name, const int sign_grade, const int exec_grade): _name(name), _signed(false), _sign_grade(sign_grade), _execute_grade(exec_grade){
    std::cout<<"Form Constructor -"<<this->_name<<"- signing min. grade: "<<this->_sign_grade<<" executing min. grade: "<<this->_execute_grade<<std::endl;
};

Form::Form(const Form &copy): _name(copy._name + ".copy"), _signed(copy._signed), _sign_grade(copy._sign_grade), _execute_grade(copy._execute_grade){
    std::cout<<"Form -"<<copy._name<<"- copied to"<<this->_name<<std::endl;
    *this = copy;
};

Form &Form::operator=(const Form &src){
    std::cout<<"Form -"<<src._name<<"- Assignment operator"<<std::endl;
    if(this == &src)
        return *this;
    // this->_grade = src.();
    return *this;
};

Form::~Form(){
    std::cout<<"Form -"<<this->_name<<"- Destructor"<<std::endl;
};


const std::string Form::getName(void) const{
    return(this->_name);
};
int Form::getExecuteGrade(void) const{
    return(this->_execute_grade);
};

int Form::getSignGrade(void) const{
    return(this->_sign_grade);
};

bool Form::is_signed(void) const{
    return(this->_signed);
};

void    Form::beSigned(Bureaucrat &src){
    if(src.getGrade() >= this->_sign_grade)
    {
        throw Form::GradeTooLowException();
    }
    else
        this->_signed = true;
};

const char *Form::GradeTooHighException::what(void) const throw(){
    return ("grade too high");
};

const char *Form::GradeTooLowException::what(void) const throw(){
    return ("grade too low");
};

std::ostream &operator<<(std::ostream &o, Form &a)
{
    o << "Form " << a.getName() << ": Execution Grade - " << a.getExecuteGrade() << ": Sign Grade:" << a.getSignGrade() <<std::endl;
    return(o);
}