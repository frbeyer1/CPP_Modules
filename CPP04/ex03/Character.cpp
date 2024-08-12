#include "AMateria.hpp"

Character::Character(){};

Character::Character(std::string const & name) : _name(name){};

Character  &Character::operator=(const Character &src){
    if(this == &src)
        return(*this);
};

Character::~Character(){};

void Character::equip(AMateria* m){
    if (m == nullptr) {
        std::cout << "Cannot equip a null Materia." << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] == nullptr) {
            this->_inventory[i] = m;
        return;
    }
    }
    std::cout << "Inventory is full, cannot equip more Materia." << std::endl;
}; 

void Character::unequip(int idx){}; 

void Character::use(int idx, ICharacter& target){};