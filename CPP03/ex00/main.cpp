#include "ClapTrap.hpp"

int main(){
    ClapTrap one("moin");
    ClapTrap two("wasgeht");

    one.set_Attack_Damage(5);
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    one.display_state();
    two.display_state();
    two.beRepaired(10 - two.getHealth());
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    one.display_state();
    two.display_state();
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    return (0);
}