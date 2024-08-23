#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout<<"Default FragTrap constructor called"<<std::endl;//muss es ohne namen funktionieren?
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _Name = name,
    _HitPoints = 100,
    _Energy = 100,
    _Attack_Damage = 30,
    std::cout<< "FragTrap -" << this->_Name << "- constructor called"<<std::endl;
};

FragTrap::~FragTrap(){
    std::cout<<"FragTrap Destructor called"<<std::endl;
}

void    FragTrap::attack(const std::string &target) {//weiss nicht ob das drinn lass, steht nicht im subject
    if (this->_HitPoints == 0)
        std::cout << RED << "FragTrap -" << this->_Name << "- is dead"<< RESET << std::endl;
    else if (this->_Energy == 0) {
        std::cout<< RED << "FragTrap -" << this->_Name << "- wants to attack, but has no more Energypoints"<< RESET <<std::endl;
        this->_Attack_Damage = 0;
    }
    else {
        std::cout<<"FragTrap -"<< this->_Name << "- attacks -" << target << "-, causing " << this->_Attack_Damage << " points of damage!" <<std::endl;
        this->_Energy -= this->_Attack_Damage;
    }
};

void    FragTrap::highFivesGuys(){
    std::cout<<GREEN<<"FragTrap high fived its oppenent"<<RESET<<std::endl;
};
