#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstring>
#include <vector>
#include <deque>

class PmergeMe{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &src);

        int    sort_vector(char **argv);
        int    sort_deque(char **argv);
        int    start_sorting(char **argv);
};