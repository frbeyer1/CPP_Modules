#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    ClapTrap one("moin");
    ClapTrap two("wasgeht");
    ScavTrap three("lol");
    FragTrap four("talahon");

    one.set_Attack_Damage(5);
    one.display_state();
    two.display_state();
    three.display_state();
    four.display_state();
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    two.beRepaired(10 - two.getHealth());
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    one.attack(two.getName());
    two.takeDamage(one.get_Attack_Damage());
    three.attack(one.getName());
    one.takeDamage(three.get_Attack_Damage());
    three.guardGate();
    four.attack(two.getName());
    two.takeDamage(four.get_Attack_Damage());
    four.highFivesGuys();
    one.display_state();
    two.display_state();
    three.display_state();
    four.display_state();
    return (0);
}
