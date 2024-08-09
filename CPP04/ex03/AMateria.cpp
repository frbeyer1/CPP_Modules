#include "AMateria.hpp"

AMateria::AMateria(){};
AMateria::AMateria(std::string const & type){}; 
AMateria::~AMateria(){};
std::string const &AMateria::getType() const{};
virtual void AMateria::use(ICharacter& target){}; 