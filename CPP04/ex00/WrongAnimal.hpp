#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal{

    protected:
    std::string _type;

    public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &copy);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &src);
    virtual void makeSound() const;
    std::string    getType() const;
};

#endif