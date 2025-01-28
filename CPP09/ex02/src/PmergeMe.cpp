#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy){
    *this = copy;
}

PmergeMe::~PmergeMe(){}

PmergeMe &PmergeMe::operator=(const PmergeMe &src){
    (void)src;
    return (*this);
}

int    PmergeMe::sort_vector(char **argv){
    std::vector<int>    a;

    for (int i = 1; argv[i]; i++)
    {
        for (int k = 1; argv[i][k]; k++){
            if (!isdigit(argv[i][k]))
                return 1;
        }
        a.push_back(atoi(argv[i]));
    }
    //check for dups

    for (std::vector<int>::const_iterator it = a.begin(); it != a.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    return 0;
}
int    PmergeMe::start_sorting(char **argv){

    // std::cout << "Before sorting: " << argv[1] << std::endl;
    return(sort_vector(argv));
};

/*
- pairwise comparison of n/2 numbers, if odd ignore one element
- sort n/2 larger numbers 
- make main chain and pend chain
- check size if one element return
- main chain with recursive binary sorted larger numbers named a1, a2, a3, a4, ...
- if in a elemets get swap, swap pair elemts in b too
- pend chain with unsorted numbers named b1, b2, b3, b4, ...
- push b1 to a when a is sorted, because of pair treatment we know smallest of a is bigger element in then pair
- generate jacobsthal numbers and push b elements according to the jn order for j <= n/2
- for getting position of b element in a use the recursive binary search again
*/