#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal{

    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(const AAnimal &copy);
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &src);
        virtual void makeSound() const = 0;
        std::string    getType() const;
};

#endif