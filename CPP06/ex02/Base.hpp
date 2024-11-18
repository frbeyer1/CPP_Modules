#pragma once

#include <iostream>
#include <cstdio>
#include <cstdlib>

class Base{
    protected:

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