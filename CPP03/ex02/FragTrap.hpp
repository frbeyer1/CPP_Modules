#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        FragTrap(const std::string &name);
        FragTrap();
        ~FragTrap();

        void attack(const std::string &target);
        void highFivesGuys(void);
};