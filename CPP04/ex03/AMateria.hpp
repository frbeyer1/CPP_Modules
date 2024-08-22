#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
    protected: 
        std::string _type;
    public:
        // AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & copy);
        AMateria  &operator=(const AMateria &src);
        virtual ~AMateria();
        std::string const & getType() const; //Returns the materia type 
        virtual AMateria* clone() const = 0; 
        virtual void use(ICharacter& target) = 0; 
};

#endif