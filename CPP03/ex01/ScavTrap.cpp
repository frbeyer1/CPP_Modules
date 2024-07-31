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

void    ScavTrap::attack(const std::string &target) {
    if (this->_HitPoints == 0)
        std::cout << RED << "ScavTrap -" << this->_Name << "- is dead"<< RESET << std::endl;
    else if (this->_Energy == 0) {
        std::cout<< RED << "ScavTrap -" << this->_Name << "- wants to attack, but has no more Energypoints"<< RESET <<std::endl;
        this->_Attack_Damage = 0;
    }
    else {
        std::cout<<"ScavTrap -"<< this->_Name << "- attacks -" << target << "-, causing " << this->_Attack_Damage << " points of damage!" <<std::endl;
        this->_Energy -= this->_Attack_Damage;
    }
};

void    ScavTrap::guardGate(){
    std::cout<<"ScavTrap is now in Gate Keeper Mode"<<std::endl;
};
