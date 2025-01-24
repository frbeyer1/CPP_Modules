#include "RPN.hpp"
// stack

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: no arguments" << std::endl;
        return 1;
    }
    else if (argc > 2)
    {
        std::cerr << "Error: too many arguments" << std::endl;
        return 1;
    }
    else
    {
        RPN test;
        return (test.calculate(std::string(argv[1])));
    }
}