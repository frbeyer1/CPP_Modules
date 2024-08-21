#include "Cure.hpp"

Cure::Cure() : AMateria() {
    _type = "Cure";
    std::cout<<"Cure Constructor"<<std::endl;
}

Cure::~Cure(){
    std::cout<<"Cure Destructor"<<std::endl;
};

Cure::Cure(const Cure &type){std::cout<<"Cure Copy Constructor"<<std::endl;};

Cure  &Cure::operator=(const Cure &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

AMateria *Cure::clone() const{
    AMateria *new_cure = new Cure(*this);
    return(new_cure);
};

void Cure::use(ICharacter &target){
    std::cout<<"* heals "<< &target << "'s wounds *";
};