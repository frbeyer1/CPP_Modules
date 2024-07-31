#include "animal.hpp"

Dog::Dog(){std::cout<<"Default Constructor"<<std::endl;};

Dog::~Dog(){std::cout<<"Destructor"<<std::endl;};

void    Cat::makeSound(){
    std::cout<<"wuff"<<std::endl;
}