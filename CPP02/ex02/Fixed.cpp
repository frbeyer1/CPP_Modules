#include "Fixed.hpp"

Fixed::Fixed() : _store(0){
    // std::cout<<"Default constructor called"<<std::endl;
};//deafult constructor

Fixed::Fixed(const int &i) : _store(i << _bits) {
    // std::cout<<"Int constructor called"<<std::endl;
};//copy constructor

Fixed::Fixed(const float &f) : _store((int)roundf((f * (1 << _bits)))) {
    // std::cout<<"Float constructor called"<<std::endl;
};//copy constructor

Fixed::Fixed(Fixed const & src){
    // std::cout<<"Copy constructor called"<<std::endl;
    *this = src;
};//copy constructor

Fixed::~Fixed(void){
    // std::cout<<"Destructor called"<<std::endl;
};



Fixed & Fixed::operator=(Fixed const & rhs)
{
    // std::cout<<"Copy assignment operator called"<<std::endl;
    if (this != &rhs)
        _store = rhs.getRawBits();
    return (*this);
};// assignment constructor


//compairson
bool    Fixed::operator>(Fixed rhs) const{
    return(this->toFloat() > rhs.toFloat());
}
bool    Fixed::operator<(Fixed rhs) const{
    return(this->toFloat() < rhs.toFloat());
}
bool    Fixed::operator>=(Fixed rhs) const{
    return(this->toFloat() >= rhs.toFloat());
}
bool    Fixed::operator<=(Fixed rhs) const{
    return(this->toFloat() >= rhs.toFloat());
}
bool    Fixed::operator==(Fixed rhs) const{
    return(this->toFloat() == rhs.toFloat());
}
bool    Fixed::operator!=(Fixed rhs) const{
    return(this->toFloat() != rhs.toFloat());
}


//arithmetic
float   Fixed::operator+(Fixed rhs) const
{
    return(this->toFloat() + rhs.toFloat());
}
float   Fixed::operator-(Fixed rhs) const
{
    return(this->toFloat() - rhs.toFloat());
}
float   Fixed::operator*(Fixed rhs) const
{
    return(this->toFloat() * rhs.toFloat());
}
float   Fixed::operator/(Fixed rhs) const
{
    return(this->toFloat() / rhs.toFloat());
}


//pre-increment
Fixed   Fixed::operator++(){
    this->_store++;
    return(*this);
}
Fixed   Fixed::operator--(){
    this->_store--;
    return(*this);
}


//post-increment
Fixed   Fixed::operator++(int){
    Fixed tmp = *this;
    ++this->_store;
    return (tmp);
}
Fixed   Fixed::operator--(int){
    Fixed tmp = *this;
    --this->_store;
    return (tmp);
}


Fixed &Fixed::min(Fixed &n1, Fixed &n2){
    if(n1.toFloat() < n2.toFloat() )
        return(n1);
    else
        return(n2);
};
const Fixed &Fixed::min(Fixed const &n1, Fixed const &n2){
    if(n1.toFloat() < n2.toFloat() )
        return(n1);
    else
        return(n2);
};
Fixed &Fixed::max(Fixed &n1, Fixed &n2){
    if(n1.toFloat() > n2.toFloat() )
        return(n1);
    else
        return(n2);
};
const Fixed &Fixed::max(Fixed const &n1, Fixed const &n2){
    if(n1.toFloat() > n2.toFloat() )
        return(n1);
    else
        return(n2);
};



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
    return((float)_store / (1<<_bits));
};

int     Fixed::toInt() const{
    return(_store >> _bits);
};

