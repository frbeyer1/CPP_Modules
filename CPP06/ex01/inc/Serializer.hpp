#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <stdio.h>
#include <stdint.h>
#include "limits.h"

class Data
{
    private:
        std::string _name;
    public:
        Data();
        Data(Data &copy);
        ~Data();
        Data &operator=(const Data &src);
};

class serializer{

    private:
        serializer();
        serializer(serializer &copy);
        ~serializer();
        serializer &operator=(const serializer &src);

    public:
        static uintptr_t serialize(Data *ptr);
        static Data *deserialize(uintptr_t raw);
};