#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), _target("default"){
    std::cout << "ShrubberyCreationForm Default Constructor " << std::endl;
};

ShrubberyCreationForm:: ShrubberyCreationForm(const std::string target): Form("ShrubberyCreationForm", 145, 137), _target(target){
    std::cout << "ShrubberyCreationForm Constructor for " << this->getTarget() << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &src): Form("ShrubberyCreationForm", 145, 137), _target(src.getTarget()){
    std::cout << "ShrubberyCreationForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    *this = src;
};

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src){
    std::cout << "ShrubberyCreationForm Constructor for copy of " << src.getTarget() << " into "<< src.getName()<<std::endl;
    if(this == &src)
        return *this;
    return *this;
};

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm Destructor for " << this->getName() << std::endl;

};

void            ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
    if((int)executor.getGrade() > this->getExecuteGrade())
        throw (Bureaucrat::GradeTooLowException());
    else if(this->is_signed() == false)
        throw (Form::FormNotSignedException());
    else
    {
        std::ofstream outfile (this->getTarget().append("_shrubbery").c_str());

        for (int i = 0; i<10; i++)
        {
		    	outfile <<
		    	"               ,@@@@@@@," << std::endl <<
		    	"       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl <<
		    	"    ,&/%&%&&%,@@@@@/@@@@@@,8888/88/8o" << std::endl <<
		    	"   ,%&?%&&%&&%,@@@/@@@/@@@88/88888/88'" << std::endl <<
		    	"   %&&%&%&/%&&%,@@/@@/ /@,@88888/88888'" << std::endl <<
		    	"   %&&%/ %&%?&&@@/ V /@@' `88/8 `/88'" << std::endl <<
		    	"   `&%#?`$/%&'    |.|         |'|8'" << std::endl <<
		    	"       |o|        | |         | |" << std::endl <<
		    	"       |.|        | |         | |" << std::endl <<
		    	"\\//|\\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl <<
		std::endl;
		}
		outfile.close();

        std::cout << "Shrubbery is now in file named " << this->getTarget() << "_shrubbery" << std::endl;
    }
};

std::string     ShrubberyCreationForm::getTarget(void) const{
    return(this->_target);
};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm &a)
{
    o << "Form " << a.getName() << ":\n\tsign-grade:\t" << a.getSignGrade() <<
	"\n\texec-grade:\t" << a.getExecuteGrade() << "\n\tis signed:\t" << a.is_signed() << std::endl;
	return (o);
}