#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <variant>
#include <stdexcept>

class ScalarConverter
{
    private:
        ScalarConverter();

    public:
        ScalarConverter(ScalarConverter &copy);
        ~ScalarConverter();

        ScalarConverter &operator=(const ScalarConverter &src);

        static std::variant<int,float,double, std::string> convert(std::string &str);
};