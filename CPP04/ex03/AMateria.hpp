#ifndef AMATERIA
# define AMATERIA
# include <iostream>
# include <string>

class AMateria {
    protected: 

    public:
        AMateria();
        AMateria(std::string const & type); 
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type 
        virtual AMateria* clone() const = 0; 
        virtual void use(ICharacter& target); 
};  

class ICharacter
{
    public: 
        virtual ~ICharacter() {} 
        virtual std::string const & getName() const = 0; 
        virtual void equip(AMateria* m) = 0; 
        virtual void unequip(int idx) = 0; 
        virtual void use(int idx, ICharacter& target) = 0; 
};

#endif