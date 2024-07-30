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
    if (this->_HitPoints == 0)
        std::cout << RED << "Claptrap -" << this->_Name << "- is dead"<< RESET << std::endl;
    else if (this->_Energy == 0) {
        std::cout<< RED << "Claptrap -" << this->_Name << "- wants to attack, but has no more Energypoints"<< RESET <<std::endl;
        this->_Attack_Damage = 0;
    }
    else {
        std::cout<<"ClapTrap -"<< this->_Name << "- attacks -" << target << "-, causing " << this->_Attack_Damage << " points of damage!" <<std::endl;
        this->_Energy -= this->_Attack_Damage;
    }
};

void    ClapTrap::takeDamage(unsigned int amount){
    if (this->_HitPoints == 0)
        std::cout << RED << "Claptrap -" << this->_Name << "- is dead" << RESET << std::endl;
    else if ((this->_HitPoints - amount) > 0){
        std::cout<< YELLOW << "Claptrap -" << this->_Name << "- took " << amount << " damage" << RESET <<std::endl;
        this->_HitPoints -= amount;//printed die message obwohl kleiner als 0
    }
    else if((this->_HitPoints - amount) <= 0){
        std::cout<< RED << "Claptrap -" << this->_Name << "- took " << amount << " damage and is dead"<< RESET<<std::endl;
        this->_HitPoints -= amount;
    }
};

void    ClapTrap::beRepaired(unsigned int amount){
    if (this->_HitPoints == 0)
        std::cout << RED << "Claptrap -" << this->_Name << "- is dead"<< RESET << std::endl;
    else if (this->_Energy - amount <= 0){
        std::cout<< "Claptrap -" << this->_Name << "- has no Energy to repair itself" << std::endl;
        this->_Energy == 0;
    }
    else if (this->_Energy - amount > 0) {
        std::cout<< "Claptrap -" << this->_Name << "- repairs it self with "<< amount << " Energypoints" <<std::endl;
        this->_Energy -= amount;
        this->_HitPoints += amount;
    }
};

void    ClapTrap::display_state() const{
    std::cout<< BLUE << std::endl;
    std::cout<< "Claptrap -" << this->_Name << "- Health: "<< this->_HitPoints<<std::endl;
    std::cout<< "Claptrap -" << this->_Name << "- Energy: " << this->_Energy<<std::endl;
    std::cout<< "Claptrap -" << this->_Name << "- Attack Damage: "<< this->_Attack_Damage<<std::endl;
    std::cout<< RESET << std::endl;
};

void    ClapTrap::set_Attack_Damage(unsigned int amount){
    this->_Attack_Damage = amount;
};
int    ClapTrap::get_Attack_Damage()const{
    return(this->_Attack_Damage);
};
int    ClapTrap::getHealth()const{
    return(this->_HitPoints);
}

std::string    ClapTrap::getName() const{
    return(_Name);
};

