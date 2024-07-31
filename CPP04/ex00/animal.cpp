#include "animal.hpp"

Animal::Animal(){std::cout<<"Default Constructor"<<std::endl;};

Animal::~Animal(){std::cout<<"Destructor"<<std::endl;};

std::string    Animal::getType() const {return(this->type);}
