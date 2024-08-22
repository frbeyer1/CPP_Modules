#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout<<"Cure Constructor"<<std::endl;
}

Cure::~Cure(){
    std::cout<<"Cure Destructor"<<std::endl;
};

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    std::cout<<"Cure Copy Constructor"<<std::endl;
};

Cure  &Cure::operator=(const Cure &src){
    this->_type = src._type;
    return(*this);
}

AMateria *Cure::clone() const{
    AMateria *new_cure = new Cure(*this);
    return(new_cure);
};

void Cure::use(ICharacter &target){
    std::cout<<"* heals "<< target.getName() << "'s wounds *"<<std::endl;
};