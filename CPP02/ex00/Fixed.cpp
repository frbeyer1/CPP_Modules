#include "Fixed.hpp"

Fixed::Fixed() : _store(0){
    std::cout<<"Default constructor called"<<std::endl;
};//deafult constructor

Fixed::Fixed(Fixed const & src){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
};//copy constructor

Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &rhs)
        _store = rhs.getRawBits();
    return (*this);
};// assignment constructor

Fixed::~Fixed(void){
    std::cout<<"Destructor called"<<std::endl;
};

int Fixed::getRawBits() const{
    std::cout<<"getRawBits member function called"<<std::endl;
    return (_store);
};

void Fixed::setRawBits( int const raw ){
    _store = raw;
}

