#ifndef Character_HPP
# define Character_HPP
# include "ICharacter.hpp"

class Character : public ICharacter{
    private:
        AMateria *_inventory[4];
        std::string _name;
    public:
        Character(std::string const & name);
        Character(Character const & copy);
        Character  &operator=(const Character &src);
        virtual ~Character();
        virtual void equip(AMateria* m); 
        virtual void unequip(int idx); 
        virtual void use(int idx, ICharacter& target);
        std::string const &getName() const;
};

#endif