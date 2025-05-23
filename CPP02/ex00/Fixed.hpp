#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{

private:

    int                 _store;
    static const int    _bits = 8;

public:
    Fixed();//deafult constructor
    Fixed(Fixed const & src);//copy constructor
    Fixed & operator=(Fixed const & rhs);// assignment constructor
    ~Fixed(void);
    
    int     getRawBits() const;
    void setRawBits( int const raw );
};

#endif