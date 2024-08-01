#include "animal.hpp"

class Dog : public Animal{
    private:

    public:
    Dog();
    Dog(const Dog &copy);
    Dog &operator=(const Dog &src);
    ~Dog();
    void makeSound()const;
};