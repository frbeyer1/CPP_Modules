#include "animal.hpp"

AAnimal::AAnimal() : _type("animal") {std::cout<<"Animal Default Constructor"<<std::endl;}

AAnimal::~AAnimal(){std::cout<<"Animal Destructor"<<std::endl;};

AAnimal::AAnimal(const AAnimal &copy){
    std::cout<<"Animal Copy Constructor"<<std::endl;
    *this = copy;
}

AAnimal  &AAnimal::operator=(const AAnimal &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

std::string    AAnimal::getType() const {return(this->_type);}

//makesound not implemented