#include "PmergeMe.hpp"
// vector and map oder deque

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        std::cerr << "Error: no arguments" << std::endl;
        return 1;
    }
    else
    {
        PmergeMe pmm;
        return(pmm.start_sorting(argv));
    }
    return 0;
}
