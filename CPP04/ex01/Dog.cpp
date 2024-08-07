#include "Dog.hpp"

Dog::Dog() : Animal() {
    _type = "Dog";
    std::cout<<"Dog Constructor"<<std::endl;
    _brain = new Brain();
    if (_brain = NULL)
        exit(1);
};

Dog::~Dog(){
    delete(_brain);
    std::cout<<"Dog Destructor"<<std::endl;
};

Dog::Dog(const Dog &copy){std::cout<<"Copy Constructor"<<std::endl;};

Dog  &Dog::operator=(const Dog &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    _brain = new Brain();
    if (_brain = NULL)
        exit(1);
    _brain = src._brain;
    return(*this);
};

void    Dog::makeSound()const{
    std::cout<<"wuff"<<std::endl;
}
void  Dog::get_idea(size_t i)const{
    for(i=0; i<100; i++)
        std::cout<<"Dog Ideas: "<<_brain->get_idea(i)<<std::endl;
};

void  Dog::set_idea(size_t i, std::string idea){
    this->_brain->set_idea(i, idea);
};