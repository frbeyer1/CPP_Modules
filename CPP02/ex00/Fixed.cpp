#include "Fixed.hpp"

Fixed::Fixed(){
    std::cout<<"Default constructor called"<<std::endl;
};//deafult constructor

Fixed::Fixed(Fixed const & src){
    std::cout<<"Copy constructor called"<<std::endl;
};//copy constructor

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout<<"Copy assignment operator called"<<std::endl;
};// assignment constructor

Fixed::~Fixed(void){
    std::cout<<"Destructor called"<<std::endl;
};

int     Fixed::getRawBits() const{
    
};

