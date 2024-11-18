#include "Base.hpp"

Base::Base(){
    std::cout << "Base Constructor" << std::endl;
};

Base::~Base(){
    std::cout << "Base Destructor" << std::endl;
};

Base *generate(void){
    switch (rand() % 3)
    {
        case 0:
            return (new A());
            break;
        case 1:
            return (new B());
            break;
        case 2:
            return (new C());
            break;
        default:
            perror ("Error");
            break;
    }
};

void identify(Base *p){

};

void identify(Base &p){

};