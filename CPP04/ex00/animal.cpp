#include "animal.hpp"

Animal::Animal() : _type("animal") {std::cout<<"Animal Default Constructor"<<std::endl;}

Animal::~Animal(){std::cout<<"Animal Destructor"<<std::endl;};

Animal::Animal(const Animal &copy){
    std::cout<<"Animal Copy Constructor"<<std::endl;
    *this = copy;
}

Animal  &Animal::operator=(const Animal &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

std::string    Animal::getType() const {return(this->_type);}

void    Animal::makeSound()const{std::cout<<"Animal sound"<<std::endl;}