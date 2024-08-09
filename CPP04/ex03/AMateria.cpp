#include "AMateria.hpp"

AMateria::AMateria(){};
AMateria::AMateria(std::string const & type){}; 
AMateria::~AMateria(){};
std::string const &AMateria::getType() const{};
void AMateria::use(ICharacter& target){};