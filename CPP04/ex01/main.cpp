#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const WrongAnimal* i = new WrongCat();
const Cat* cat = new Cat();
std::cout << std::endl;
std::cout << "type: " << j->getType()<< std::endl;
std::cout << "type: " << i->getType()<< std::endl;
std::cout << "type: " << cat->getType() << std::endl;
std::cout << std::endl;
std::cout << "Sounds: " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
cat->makeSound();
std::cout << std::endl;
delete i;
delete j;
delete meta;
delete cat;
return 0;
}