#ifndef ICharacter_HPP
# define ICharacter_HPP
# include "AMateria.hpp"

class AMateria; 

class ICharacter
{
    public: 
        virtual ~ICharacter() {};
        virtual std::string const & getName() const = 0; 
        virtual void equip(AMateria* m) = 0; 
        virtual void unequip(int idx) = 0; 
        virtual void use(int idx, ICharacter& target) = 0; 
};

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