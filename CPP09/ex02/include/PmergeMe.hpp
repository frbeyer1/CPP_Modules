#pragma once

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstring>
#include <vector>
#include <deque>
#include <algorithm>
#include <sys/time.h>
#include <utility>
#include <iomanip>

class PmergeMe{
    public:
        PmergeMe();
        PmergeMe(const PmergeMe &copy);
        ~PmergeMe();
        PmergeMe &operator=(const PmergeMe &src);

        int    start_sorting(char **argv);
};