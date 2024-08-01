#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal") {std::cout<<"WrongAnimal Default Constructor"<<std::endl;}

WrongAnimal::~WrongAnimal(){std::cout<<"WrongAnimal Destructor"<<std::endl;};

WrongAnimal::WrongAnimal(const WrongAnimal &copy){std::cout<<"WrongAnimal Copy Constructor"<<std::endl;}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

std::string    WrongAnimal::getType() const {return(this->_type);}

void    WrongAnimal::makeSound()const{std::cout<<"WrongAnimal Sound"<<std::endl;}