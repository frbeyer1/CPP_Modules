#include "Base.hpp"

int main(){
    srand(time(NULL));
    Base *test = generate();
    identify(test);
    identify(*test);
    delete(test);
    return(0);
}

//-dynamic_cast is used to convert a pointer or reference from a base class to a derived class
//-performs at runtime
//-With pointers: Returns nullptr if the conversion is not possible
//-With references: Throws a bad_cast exception if the conversion is not possible

/*
Common Use Cases

    Downcasting: Converting a base class pointer to a derived class pointer.

    Type Checking: Verifying if an object is of a specific derived type.

    Cross-Casting: Converting between sibling classes in multiple inheritance scenarios.
*/