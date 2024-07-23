#include "Fixed.hpp"

Fixed::Fixed() : _store(0){
    std::cout<<"Default constructor called"<<std::endl;
};//deafult constructor

Fixed::Fixed(const int &i) : _store(i << _bits) {
    std::cout<<"Int constructor called"<<std::endl;
};//copy constructor

Fixed::Fixed(const float &f) : _store((int)roundf((f * (1 << _bits)))) {
    std::cout<<"Float constructor called"<<std::endl;
};//copy constructor

Fixed::Fixed(Fixed const & src){
    std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
};//copy constructor

Fixed::~Fixed(void){
    std::cout<<"Destructor called"<<std::endl;
};




Fixed & Fixed::operator=(Fixed const & rhs){
    std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &rhs)
        _store = rhs.getRawBits();
    return (*this);
};// assignment constructor

std::ostream &operator<<(std::ostream &output, const Fixed &rhs){
    output << rhs.toFloat();
    return (output);
};// assignment constructor




void Fixed::setRawBits( int const raw ){
    _store = raw;
}

int Fixed::getRawBits() const{
    return (_store);
};

float   Fixed::toFloat() const{
    return((float)_store / (1<<_store));
};

int     Fixed::toInt() const{
    return(_store >> _bits);
};
