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

//delete later
template <typename Container>
void print_Container_of_pairs(const Container& pairs) {
    for (typename Container::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
        std::cout << "(" << it->first << ", " << it->second << ") ";
    }
    std::cout << std::endl;
}
//

template <typename Iterator>
static void sort_pair_container(Iterator begin, Iterator end){
    if(std::distance(begin, end) > 1){
        Iterator mid = begin + std::distance(begin, end) / 2;
        sort_pair_container(begin, mid);
        sort_pair_container(mid, end);
        std::inplace_merge(begin, mid, end);
    }
}

static bool isOdd(int number) {
    return (number % 2 != 0);
}

static int jacobsthal(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

template <typename Container>
static typename Container::iterator binarySearch(typename Container::iterator left, typename Container::iterator right, int value){
    typename Container::iterator mid;
    while (std::distance(left, right) > 1){
        mid = left + std::distance(left, right) / 2;
        if (value > *mid)
            left = mid;
        else
            right = mid;
    }
    if(*left < value)
        return (left + 1);
    return left;
}

template <typename Container, typename PairContainer>
static void sort_container(Container &con, PairContainer &pairs){
    int struggler = -1;
    Container a;
    Container b;
    Container insert_order;

    if (con.size() == 1)
        return;
    if (isOdd(con.size()))
    {
        struggler = con.back();
        con.pop_back();
    }

    //pairwise comparison and push to pairs-Container
    typename Container::iterator it = con.begin();
    while(it != con.end()){
        int first = *it;
        it++;
        if (it != con.end()){
            int second = *it++;
            if(first < second)
                std::swap(first, second);
            pairs.push_back(std::make_pair(first, second));
        }
    }
    std::cout << "Pairs: ";
    print_Container_of_pairs(pairs);
    std::cout << "Main chain: ";
    print_container(con);
    sort_pair_container(pairs.begin(), pairs.end());
    std::cout << "Swaped Pairs: ";
    print_Container_of_pairs(pairs);
    std::cout << std::endl;

    //generate main and pend chain
    typename PairContainer::iterator pair_it = pairs.begin();
    a.push_back(pair_it->second);
    a.push_back(pair_it->first);
    pair_it++;
    for (; pair_it != pairs.end(); pair_it++){
        a.push_back(pair_it->first);
        b.push_back(pair_it->second);
    }
    std::cout << "a chain: ";
    print_container(a);
    std::cout << "b chain: ";
    print_container(b);

    //generate order of insertion via jacobsthal numbers
    if(b.size() != 0)
    {
        int     index = 3;
        size_t  highest = 1;
        size_t  jacobsthal_number;

        for (size_t i = 0; i < b.size() - 1; index++)
        {
            jacobsthal_number = jacobsthal(index);
            if(jacobsthal_number > b.size())
                jacobsthal_number = b.size();
            for (int j = 0; (jacobsthal_number - j) > highest; j++)
            {
                insert_order.push_back(jacobsthal_number - j);
                i++;
            }
            highest = jacobsthal_number;
            if(highest > b.size() - 1)
                break;
        }
    }
    std::cout << "insert_order chain: ";
    print_container(insert_order);

    //insert elements from b to a with binary search
    typename Container::iterator value_to_insert;
    typename Container::iterator last_position;
    typename Container::iterator index_in_a;
    size_t count;
    for (typename Container::iterator it = insert_order.begin(); it != insert_order.end(); it++){
        value_to_insert = b.begin() + *it - 1;
        last_position = a.begin() + *it + count;
        count++;
        index_in_a = binarySearch<Container>(a.begin(), last_position, *value_to_insert);
        a.insert(index_in_a, *value_to_insert);
    }
    if(struggler != -1){
        index_in_a = binarySearch<Container>(a.begin(), last_position, struggler);
        a.insert(index_in_a, *value_to_insert);
    }
}

int    PmergeMe::sort_vector(char **argv){
    
    std::vector<int>                    vec;
    std::vector<std::pair<int, int> >   pairs;
    struct timeval start, end;

    gettimeofday(&start, NULL);
    if (save_to_container(vec, argv))
        return 1;
    // std::cout << "Before: ";
    // print_container(vec);
    sort_container(vec, pairs);
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds * 1e6 + microseconds;
    // std::cout << "After: ";
    // print_container(vec);
    std::cout << "Time to process a range of " << vec.size() << " elements with std::vector: " << elapsed << " us" << std::endl;
    return 0;
}

int    PmergeMe::sort_deque(char **argv){

    std::deque<int>                    deq;
    std::deque<std::pair<int, int> >   pairs;
    struct timeval start, end;

    gettimeofday(&start, NULL);
    if (save_to_container(deq, argv))
        return 1;
    sort_container(deq, pairs);
    gettimeofday(&end, NULL);
    long seconds = end.tv_sec - start.tv_sec;
    long microseconds = end.tv_usec - start.tv_usec;
    double elapsed = seconds * 1e6 + microseconds;
    std::cout << "Time to process a range of " << deq.size() << " elements with std::deque: " << elapsed << " us" << std::endl;
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