#include "AMateria.hpp"

// AMateria::AMateria()
// {
//     std::cout<<"AMateria Creator"<<std::endl;
// };

AMateria::AMateria(std::string const & type) : _type(type)
{
    // std::cout<<"AMateria Constructor"<<std::endl;
};

AMateria::AMateria(AMateria const & copy)
{
    *this = copy;
    // std::cout<<"Copy of AMateria "<<_type<<" made"<<std::endl;
};

AMateria::~AMateria()
{
    // std::cout<<"AMateria Destructor"<<std::endl;
};

AMateria  &AMateria::operator=(const AMateria &src){
    this->_type = src._type;
    return(*this);
}

std::string const &AMateria::getType() const
{
    return (_type);
};
