#include "ICharacter.hpp"

Character::Character(std::string const & name) : _name(name){
    std::cout<<"Character Constructor: "<< _name<<std::endl;
    for(int i=0; i<4; i++)
        _inventory[i] = 0;
};

Character::Character(Character const & copy) : _name(copy.getName()){
    for (int i=0; i < 4; i++)
    {
        if(copy._inventory[i])
            _inventory[i] = (copy._inventory[i])->clone();
    }
    std::cout<<"Copy of Character "<<_name<<" made"<<std::endl;
};

Character  &Character::operator=(const Character &src){
    for (int i=0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
        if(src._inventory[i])
            _inventory[i] = (src._inventory[i])->clone();
    }
    return(*this);
};

Character::~Character(){
    for (int i=0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
    }
    std::cout<<"Character Destructor: "<<_name<<std::endl;
};

void Character::equip(AMateria* m){
    if (m == nullptr) {
        std::cout << "Cannot equip a null Materia." << std::endl;
        return;
    }
    for (int i = 0; i < 4; ++i) {
        if (this->_inventory[i] == nullptr) {
            this->_inventory[i] = m;
        std::cout<<_name<<" equiped one "<<m->getType()<<" to slot "<<i<<std::endl;
        return;
    }
    }
    std::cout << "Inventory is full, cannot equip more Materia." << std::endl;
}; 

void Character::unequip(int idx){
    if(idx >= 0 && idx <4 )
    {
        if(_inventory[idx] != 0)
        {
            AMateria *ptr = _inventory[idx];
            _inventory[idx] = 0;
            std::cout<<_name<<"unequiped slot"<<idx<<std::endl;
        }
        else
            std::cout<<_name<<"'s slot "<<idx<<" is already empty, nothing to unequip"<<std::endl;
    }
    else
        std::cout<<_name<<"'s inventory doesn't have a slot "<<idx<<std::endl;
}; 

void Character::use(int idx, ICharacter& target){};

std::string const &Character::getName() const{
    return(_name);
};