#include "RPN.hpp"

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

/*
std::stack:
    - container adapter: it is built upon other underlying container types, such as std::deque, std::vector, or std::list.
    - LIFO Behavior
*/