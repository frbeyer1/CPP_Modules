#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    std::cout<<"MateriaSource Constructor"<<std::endl;
    for(int i=0; i<4; i++)
    {
        _inventory[i] = NULL;
    }
};
MateriaSource::MateriaSource(MateriaSource const & copy){
    for (int i=0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
        if(copy._inventory[i])
            _inventory[i] = (copy._inventory[i])->clone();
    }
    std::cout<<"Copy of MateriaSource made"<<std::endl;
};
MateriaSource  &MateriaSource::operator=(const MateriaSource &src){
    for (int i=0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];
        if(src._inventory[i])
            _inventory[i] = (src._inventory[i])->clone();
    }
    return(*this);
};
MateriaSource::~MateriaSource(){
    for (int i=0; i < 4; i++)
    {
        if(_inventory[i])
            delete _inventory[i];   
    }
    std::cout<<"MateriaSource Destructor"<<std::endl;
};
void MateriaSource::learnMateria(AMateria *m){
    for (int i = 0; i < 4; i++) 
    {
        if (this->_inventory[i] == NULL)
        {
            this->_inventory[i] = m;
            std::cout<<"Materia "<<m->getType()<<" learned."<<std::endl;
            return; 
        }
    }
    std::cout << "Cannot learn more than 4 Materia." << std::endl;
};

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; i < 4; i++) 
    {
        if (this->_inventory[i] != NULL && (this->_inventory[i])->getType() == type)
        {
            std::cout<<"Materia "<<type<<" cerated."<<std::endl;
            return((this->_inventory[i])->clone()); 
        }
    }
    std::cout << "Materia does not exist." << std::endl;
    return(NULL);
};