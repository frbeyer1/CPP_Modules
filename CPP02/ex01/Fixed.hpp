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
    Fixed(Fixed const & src);//copy constructor
    Fixed & operator=(Fixed const & rhs);
    ~Fixed(void);
    
    int     getRawBits() const;
    void    setRawBits( int const raw );
    float   toFloat() const;
    int     toInt() const;
};

std::ostream &operator<<(std::ostream &output, const Fixed &rhs);
#endif