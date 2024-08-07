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
    delete j;
    delete i;
	Dog *a = new Dog();
	// Cat *a = new Cat();
	if (a == NULL)
	{
		perror("Allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}

	// a->set_idea(0, "I have to sniff it");
	// a->set_idea(1, "I have to pee on it");
	// a->set_idea(2, "I have to sniff it again");
	// a->set_idea(101, "some shit");
    return 0;
}
//seg faul in setidea, brain destructor wird nicht angezeigt