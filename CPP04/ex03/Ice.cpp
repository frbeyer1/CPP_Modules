#include "Ice.hpp"

Ice::Ice() : AMateria() {
    _type = "ice";
    std::cout<<"Ice Constructor"<<std::endl;
}

Ice::~Ice(){
    std::cout<<"Ice Destructor"<<std::endl;
};

Ice::Ice(const Ice &type){std::cout<<"Ice Copy Constructor"<<std::endl;};

Ice  &Ice::operator=(const Ice &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

AMateria *Ice::clone() const{
    AMateria *new_ice = new Ice(*this);
    return(new_ice);
};

void Ice::use(ICharacter &target){
    std::cout<<"* shoots an ice bolt at "<< &target << " *";
};
