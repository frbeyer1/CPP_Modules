#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45), _target("default"){
    std::cout << "RobotomyRequestForm Default Constructor " << std::endl;
};

RobotomyRequestForm:: RobotomyRequestForm(const std::string target): Form("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "RobotomyRequestForm Constructor for " << this->getTarget() << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src): Form("RobotomyRequestForm", 72, 45), _target(src.getTarget()){
    std::cout << "RobotomyRequestForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    *this = src;
};

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &src){
    std::cout << "RobotomyRequestForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    if(this == &src)
        return *this;
    return *this;
};

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm Destructor for " << this->getName() << std::endl;

};

static int robot_fail = 0;

void            RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if((int)executor.getGrade() > this->getExecuteGrade())
		throw(Bureaucrat::GradeTooLowException());
	else if (this->is_signed() == false)
		throw(Form::FormNotSignedException());
	else if (robot_fail++ % 2)
		std::cout << this->getTarget() << " was robotomized" << std::endl;
	else
		std::cout << "Robotomy failed" << std::endl;
};

std::string     RobotomyRequestForm::getTarget(void) const{
    return(this->_target);
};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm *a)
{
    o << "Form " << a->getName() << ":\n\tsign-grade:\t" << a->getSignGrade() <<
	"\n\texec-grade:\t" << a->getExecuteGrade() << "\n\tis signed:\t" << a->is_signed() << std::endl;
	return (o);
}