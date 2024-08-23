#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <fstream>
# include <string>
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class ClapTrap{

    private:
    std::string _Name;
    int         _HitPoints;
    int         _Energy;
    int         _Attack_Damage;

    public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ~ClapTrap();
    void    attack(const std::string &target);
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);
    void    display_state() const;
    void    set_Attack_Damage(unsigned int d);
    std::string    getName() const;
    int    get_Attack_Damage() const;
    int    getHealth() const;
};
#endif