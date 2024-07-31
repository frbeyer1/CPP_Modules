#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal{

    private:
    std::string type;

    public:
    Animal();
    ~Animal();
    void makeSound();
    std::string    getType();
};

class Dog : public Animal{
    private:
    std::string type = "Dog";
    public:
    Dog();
    ~Dog();
    void makeSound();
};

class Cat : public Animal{
    private:
    std::string type = "Cat";
    public:
    Cat();
    ~Cat();
    void makeSound();
};

#endif