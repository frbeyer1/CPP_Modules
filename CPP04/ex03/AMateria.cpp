#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout<<"AMateria Creator"<<std::endl;
};

AMateria::AMateria(std::string const & type)
{
    std::cout<<"AMateria Constructor"<<std::endl;
};

AMateria::AMateria(AMateria const & copy) : _type(copy._type)
{
    std::cout<<"Copy of Character "<<_type<<" made"<<std::endl;
};

AMateria::~AMateria()
{
    std::cout<<"AMateria Destructor"<<std::endl;
};

AMateria  &AMateria::operator=(const AMateria &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    return(*this);
}

std::string const &AMateria::getType() const
{
    return (_type);
};

void AMateria::use(ICharacter& target)
{
    std::cout<<" used "<<_type<<" on "<<target.getName()<<std::endl;
};