#include "animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain *_brain;
    public:
        Cat();
        Cat(const Cat &copy);
        Cat &operator=(const Cat &src);
        ~Cat();
        void makeSound()const;
        void  get_idea(size_t i)const;
        void  set_idea(size_t j, std::string idea);
};
