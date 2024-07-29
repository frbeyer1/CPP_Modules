#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <fstream>
# include <string>

class ClapTrap{

    private:
    std::string _Name;
    int         _HitPoints;
    int         _Energy;
    int         _Attack_Damage;

    public:
    ClapTrap(const std::string &name);
    ClapTrap();
    ~ClapTrap();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
};
#endif