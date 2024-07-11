#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class harl{

private:

    void debug( void );
    void info( void );
    void warning( void );
    void error( void );

public:

    harl(void);
    void complain( std::string level );

};

typedef void(harl::*f_ptr)();

#endif