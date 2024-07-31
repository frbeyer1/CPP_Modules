#include "ScavTrap.hpp"

int main(){
    ClapTrap one("moin");
    ClapTrap two("wasgeht");
    ScavTrap three("lol");

    one.set_Attack_Damage(5);
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    one.display_state();
    two.display_state();
    three.display_state();
    two.beRepaired(10 - two.getHealth());
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    one.display_state();
    two.display_state();
    three.display_state();
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    three.attack(one.getName());
    one.takeDamage(three.get_Attack_Damage());
    one.display_state();
    two.display_state();
    three.display_state();
    three.guardGate();
    return (0);
}
