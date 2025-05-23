#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria {
    private:
        std::string _type;
    public:
        Cure();
        Cure(const Cure & type);
        Cure  &operator=(const Cure &src);
        virtual ~Cure();
        virtual AMateria *clone() const;
        virtual void use(ICharacter &target);
};

#endif