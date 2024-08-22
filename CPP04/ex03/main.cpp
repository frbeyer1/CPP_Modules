#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main() { 
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure()); 
	ICharacter* me = new Character("me"); 
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp); 
	tmp = src->createMateria("cure");
	me->equip(tmp); 
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp); 
	tmp = src->createMateria("cure");
	me->equip(tmp); 
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob); 
	me->use(4, *bob);
	delete tmp;//so richtig? weil meteria soll ja auf dem boden liegen bleiben, wenn kein platz mehr ist, also hier loeschen?
	delete bob; 
	delete me;
	delete src;
	return 0; 
}
