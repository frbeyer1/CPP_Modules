#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria {
    private:
        std::string _type;
    public:
        Ice();
        Ice(const Ice & type);
        Ice  &operator=(const Ice &src);
        virtual ~Ice();
        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
};

#endif