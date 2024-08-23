#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

class AAnimal{

    protected:
        std::string _type;
        //AAnimal();

    public:
        AAnimal();
        AAnimal(const AAnimal &copy);
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &src);
        virtual void makeSound() const = 0;
        std::string    getType() const;
};

#endif

// wenn nur constructor in private/protected -> nicht instanziierbar und nicht abstrakt
// wenn nur rein virtuelle Methode (virtual ... fkt = 0) -> nicht instaziierbar und abstrakt