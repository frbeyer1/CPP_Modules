#include "ScalarConverter.hpp"

int main(int ac, char**av)
{
    if(ac == 2)
    {
        ScalarConverter::convert(std::string (av[1]));
    }
    else
        std::cout<<"Please input two Arguments"<<std::endl;
    return 0;
}