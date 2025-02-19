#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stdexcept>
#include <stdio.h>
#include <stdint.h>
#include "limits.h"
// #include <cctype>

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
uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);