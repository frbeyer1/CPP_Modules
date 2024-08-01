#include "Dog.hpp"

Dog::Dog() : Animal() {_type = "Dog"; std::cout<<"Dog Constructor"<<std::endl;};

Dog::~Dog(){std::cout<<"Dog Destructor"<<std::endl;};

Dog::Dog(const Dog &copy){std::cout<<"Copy Constructor"<<std::endl;};

Dog  &Dog::operator=(const Dog &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
};

void    Dog::makeSound()const{
    std::cout<<"wuff"<<std::endl;
}