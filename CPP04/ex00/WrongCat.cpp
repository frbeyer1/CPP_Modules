#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {_type = "WrongCat"; std::cout<<"WrongCat Constructor"<<std::endl;};

WrongCat::~WrongCat(){std::cout<<"WrongCat Destructor"<<std::endl;};

WrongCat::WrongCat(const WrongCat &copy){std::cout<<"WrongCat Copy Constructor"<<std::endl;};

WrongCat  &WrongCat::operator=(const WrongCat &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
};

void    WrongCat::makeSound() const {std::cout<<"WrongCat sound"<<std::endl;}