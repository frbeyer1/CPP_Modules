#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private:
        Brain *_brain;
    public:
        Dog();
        Dog(const Dog &copy);
        Dog &operator=(const Dog &src);
        ~Dog();
        void makeSound()const;
        void    set_idea(size_t i, std::string idea);
        void    get_idea(size_t j)const;
};