#ifndef MateriaSource_HPP
# define MateriaSource_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *(_inventory[4]);
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & copy);
        MateriaSource  &operator=(const MateriaSource &src);
        ~MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif