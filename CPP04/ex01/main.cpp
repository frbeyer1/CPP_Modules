#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
j->set_idea(0, "moin");
delete j;
delete i;
return 0;
}
