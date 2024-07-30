#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    std::cout<<"Default ScavTrap constructor called"<<std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _Name = name,
    _HitPoints = 100,
    _Energy = 50,
    _Attack_Damage = 20,
    std::cout<< "Scavtrap -" << this->_Name << "- constructor called"<<std::endl;
};

ScavTrap::~ScavTrap(){
    std::cout<<"ScavTrap Destructor called"<<std::endl;
}

void    ScavTrap::attack(const std::string &target) { ClapTrap::attack(target);
};//message noch anpassen

void    ScavTrap::guardGate(){
    std::cout<<"ScavTrap is now in Gate Keeper Mode"<<std::endl;
};