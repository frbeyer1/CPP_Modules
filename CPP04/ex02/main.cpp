#include "animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main()
{
	//ex02 test:
	//const AAnimal *animal = new AAnimal();
	//animal->makeSound();

    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();
    delete j;
    delete i;
	/*
	Dog *a = new Dog();
	Cat *b = new Cat();
	// Cat *a = new Cat();
	if (a == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	a->set_idea(99, "I have to sniff it");
	// a->set_idea(1, "I have to pee on it");
	// a->set_idea(2, "I have to sniff it again");
	// a->set_idea(101, "some shit");
	a->get_idea(0);
	b->set_idea(0, "moin");
	b->get_idea(0);
	delete b;
	delete a;
	*/
    return 0;
}
