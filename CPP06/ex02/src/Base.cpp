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
            return(NULL);
            break;
    }
};

void identify(Base *p){
    std::cout << "pointer to" << std::endl;
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
};

void identify(Base &p){
    A a;
    B b;
    C c;

    std::cout << "reference to" <<std::endl;

    try{ //A failing dynamic cast to a reference type throws a bad_cast exception
        a = dynamic_cast<A&>(p);
        std::cout<< "A" <<std::endl;
    } catch (std::exception & e)
    {
        try{
        b = dynamic_cast<B&>(p);
        std::cout<< "B" <<std::endl;
        } catch (std::exception & e)
        {
            try{
            c = dynamic_cast<C&>(p);
            std::cout<< "C" <<std::endl;
            } catch (std::exception & e){
            }
        }
    }
};
