#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
    private:

    public:
    WrongCat();
    WrongCat(const WrongCat &copy);
    WrongCat &operator=(const WrongCat &src);
    ~WrongCat();
    void makeSound()const;
};
