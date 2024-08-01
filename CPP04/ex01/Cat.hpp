#include "animal.hpp"

class Cat : public Animal{
    private:

    public:
    Cat();
    Cat(const Cat &copy);
    Cat &operator=(const Cat &src);
    ~Cat();
    void makeSound()const;
};
