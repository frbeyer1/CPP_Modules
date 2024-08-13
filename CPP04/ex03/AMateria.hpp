#ifndef AMATERIA
# define AMATERIA
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class AMateria {
    protected: 
        std::string _type;
    public:
        AMateria();
        AMateria(std::string const & type); 
        AMateria  &operator=(const AMateria &src);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type 
        virtual AMateria* clone() const = 0; 
        virtual void use(ICharacter& target); 
};
 
class Ice : public AMateria {
    public:
        Ice();
        Ice(std::string const & type);
        Ice  &operator=(const Ice &src);
        virtual ~Ice();
        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
};

class Cure : public AMateria {
    public:
        Cure();
        Cure(std::string const & type);
        Cure  &operator=(const Cure &src);
        virtual ~Cure();
        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
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