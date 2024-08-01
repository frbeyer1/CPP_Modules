#include "Cat.hpp"

Cat::Cat() : Animal() {_type = "Cat"; std::cout<<"Cat Constructor"<<std::endl;};

Cat::~Cat(){std::cout<<"Cat Destructor"<<std::endl;};

Cat::Cat(const Cat &copy){std::cout<<"Copy Constructor"<<std::endl;};

Cat  &Cat::operator=(const Cat &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
};

void    Cat::makeSound()const{
    std::cout<<"miau"<<std::endl;
}
