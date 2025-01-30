#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 25, 5), _target("default"){
    std::cout << "PresidentialPardonForm Default Constructor " << std::endl;
};

PresidentialPardonForm:: PresidentialPardonForm(const std::string target): Form("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "PresidentialPardonForm Constructor for " << this->getTarget() << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src): Form("PresidentialPardonForm", 25, 5), _target(src.getTarget()){
    std::cout << "PresidentialPardonForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    *this = src;
};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &src){
    std::cout << "PresidentialPardonForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    if(this == &src)
        return *this;
    return *this;
};

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm Destructor for " << this->getName() << std::endl;

};

void            PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if((int)executor.getGrade() > this->getExecuteGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->is_signed() == false)
		throw(Form::FormNotSignedException());
	else
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

std::string     PresidentialPardonForm::getTarget(void) const{
    return(this->_target);
};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm &a)
{
    o << "Form " << a.getName() << ":\n\tsign-grade:\t" << a.getSignGrade() <<
	"\n\texec-grade:\t" << a.getExecuteGrade() << "\n\tis signed:\t" << a.is_signed() << std::endl;
	return (o);
}