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

template <typename Container>
static int save_to_container(Container &container, char **argv){
    for (int i = 1; argv[i]; i++)
    {
        for (int k = 1; argv[i][k]; k++){
            if (!isdigit(argv[i][k])){
                std::cerr << "Error: Invalid input" << std::endl;
                return 1;
            }
        }
        if(atoi(argv[i]) < 0){
            std::cerr << "Error: Invalid number" << std::endl;
            return 1;
        }
        if (std::find(container.begin(), container.end(), atoi(argv[i])) != container.end()){
            std::cerr << "Error: Duplicate number" << std::endl;
            return 1;
        }
        container.push_back(atoi(argv[i]));
    }
    return 0;
}

template <typename Container>
static void print_container(Container &container){
    for (typename Container::const_iterator it = container.begin(); it != container.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

static bool isOdd(int number) {
    return (number % 2 != 0);
}

template <typename Container>
static void sort_container(Container &a, Container &b){


}

int    PmergeMe::sort_vector(char **argv){
    std::vector<int>    a;
    std::vector<int>    b;
    int struggler = -1;
    struct timeval start, end;

    gettimeofday(&start, NULL);
    if (save_to_container(a, argv))
        return 1;
    std::cout << "Before: ";
    print_container(a);
    int n = a.size();
    if (isOdd(n))
    {
        struggler = a.back();
        a.pop_back();
    }
    n = a.size();
    sort_container(a, b);
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds * 1e6 + microseconds;
    std::cout << "After: ";
    print_container(a);
    std::cout << "Time to process a range of " << a.size() << " elements with std::vector: " << elapsed << " us" << std::endl;
    return 0;
}

int    PmergeMe::sort_deque(char **argv){
    std::deque<int>    a;
    std::deque<int>    b;
    int struggler = -1;
    struct timeval start, end;

    gettimeofday(&start, NULL);
    if (save_to_container(a, argv))
        return 1;
    int n = a.size();
    if (isOdd(n))
    {
        struggler = a.back();
        a.pop_back();
    }
    n = a.size();
    sort_container(a, b);
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds * 1e6 + microseconds;
    std::cout << "Time to process a range of " << a.size() << " elements with std::deque: " << elapsed << " us" << std::endl;
    return 0;
}

int    PmergeMe::start_sorting(char **argv){

    if(sort_vector(argv))
        return 1;
    if(sort_deque(argv))
        return 1;
    return 0;
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