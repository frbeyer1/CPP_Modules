#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <stdio.h>


class Base{
    private:

    public:
        Base();
        virtual ~Base();

};

class A : public Base{
};

class B : public Base{
};

class C : public Base{
};

Base *generate(void);
void identify(Base *p);
void identify(Base &p);