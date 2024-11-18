#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <variant>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include "limits.h"
// #include <cctype>

typedef enum e_type
{
    Char,
    Int,
    Float,
    Double,
    NonDisplayable
} t_type;

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(ScalarConverter &copy);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &src);

        std::string _type;
    public:

        static void convert(std::string literal);
};