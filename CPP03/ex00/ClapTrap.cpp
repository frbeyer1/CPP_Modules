#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout<<"Default constructor called"<<std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : 
    _Name(name),
    _HitPoints(10),
    _Energy(10),
    _Attack_Damage(0) {
    std::cout<< "Claptrap -" << this->_Name << "- constructor called"<<std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout<<"Destructor called"<<std::endl;
}

void    ClapTrap::attack(const std::string &target){
    std::cout<<"ClapTrap"<< this->_Name << "attacks" << target << ", causing" << this->_Attack_Damage << "points of damage!" <<std::endl;
};

void    ClapTrap::takeDamage(unsigned int amount){

};

void    ClapTrap::beRepaired(unsigned int amount){

};
