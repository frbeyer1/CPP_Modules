#include "AMateria.hpp"

AMateria::AMateria(){};

AMateria::AMateria(std::string const & type){}; 

AMateria::~AMateria(){};

AMateria  &AMateria::operator=(const AMateria &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

std::string const &AMateria::getType() const{return (_type);};

void AMateria::use(ICharacter& target){
    std::cout<<"AMateria - abstract use on "<<target.getName()<<std::endl;
};