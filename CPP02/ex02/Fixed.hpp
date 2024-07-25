#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed{

private:

    int                 _store;
    static const int    _bits = 8;

public:
    Fixed(); // default cons
    Fixed(const int &i); // int cons
    Fixed(const float &f); // float const
    Fixed(const Fixed &src);//copy constructor
    ~Fixed(void);
    
    Fixed & operator=(Fixed const & rhs);

    bool operator>(Fixed rhs)const; //compairson
    bool operator<(Fixed rhs)const;
    bool operator>=(Fixed rhs)const;
    bool operator<=(Fixed rhs)const;
    bool operator==(Fixed rhs)const;
    bool operator!=(Fixed rhs)const;

    float operator+(Fixed rhs)const; //arithmetic
    float operator-(Fixed rhs)const;
    float operator*(Fixed rhs)const;
    float operator/(Fixed rhs)const;

    Fixed operator++();
    Fixed operator--();

    Fixed operator++(int);
    Fixed operator--(int);

    static Fixed &min(Fixed &n1, Fixed &n2);
    static const Fixed &min(Fixed const &n1, Fixed const &n2);
    static Fixed &max(Fixed &n1, Fixed &n2);
    static const Fixed &max(Fixed const &n1, Fixed const &n2);
    int     getRawBits() const;
    void    setRawBits( int const raw );
    float   toFloat() const;
    int     toInt() const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &rhs);
#endif