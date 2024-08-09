#include "Cat.hpp"

Cat::Cat() : AAnimal() {
    _type = "Cat";
    std::cout<<"Cat Constructor"<<std::endl;
    _brain = new Brain();
    if (_brain == NULL)
        exit(1);
};

Cat::~Cat(){
    delete(_brain);
    std::cout<<"Cat Destructor"<<std::endl;
};

Cat::Cat(const Cat &copy){std::cout<<"Copy Constructor"<<std::endl;};

Cat  &Cat::operator=(const Cat &src){
    if(this == &src)
        return(*this);
    this->_type = src._type;
    _brain = new Brain();
    if (_brain = NULL)
        exit(1);
    _brain = src._brain;
    return(*this);
};

void    Cat::makeSound()const{
    std::cout<<"miau"<<std::endl;
}
void  Cat::get_idea(size_t j)const{
    for(int i=0; i<(j+1); i++)
        std::cout<<"Cat Ideas: "<<_brain->get_idea(i)<<std::endl;
};
void  Cat::set_idea(size_t i, std::string idea){
    this->_brain->set_idea(i, idea);
};