#include "animal.hpp"

Cat::Cat(){std::cout<<"Default Constructor"<<std::endl;};

Cat::~Cat(){std::cout<<"Destructor"<<std::endl;};

void    Cat::makeSound(){
    std::cout<<"miau"<<std::endl;
}
