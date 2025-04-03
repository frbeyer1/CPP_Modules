#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe &copy){
    *this = copy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src){
    (void)src;
    return (*this);
}

template <typename Container>
static int save_to_container(Container &container, char **argv){
    for (int i = 1; argv[i]; i++)
    {
        // if(strlen(argv[i]) > 1){
        //     for(int j = 0; argv[i][j]; j++){
        //         if (!isdigit(argv[i][j]) && !isspace(argv[i][j])) {
        //             std::cerr << "Error: Invalid input" << std::endl;
        //             return 1;
        //         }
        //         if(atoi(&argv[i][j]) < 0){
        //             std::cerr << "Error: Invalid number" << std::endl;
        //             return 1;
        //         }
        //         if (std::find(container.begin(), container.end(), atoi(&argv[i][j])) != container.end()){
        //             std::cerr << "Error: Duplicate number" << std::endl;
        //             return 1;
        //         }
        //         if(isdigit(argv[i][j]))
        //             container.push_back(argv[i][j] - '0');
        //     }
        //     continue;
        // }
        if (!isdigit(*argv[i])){
            std::cerr << "Error: Invalid character" << std::endl;
            return 1;
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


// template <typename Container>
// void print_Container_of_pairs(const Container& pairs) {
//     for (typename Container::const_iterator it = pairs.begin(); it != pairs.end(); ++it) {
//         std::cout << "(" << it->first << ", " << it->second << ") ";
//     }
//     std::cout << std::endl;
// }


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
        if (*mid < value)
            left = mid;
        else
            right = mid;
    }
    if(*left < value)
        return (left + 1);
    return left;
}

//merge-insertion algorythm
template <typename Container, typename PairContainer>
static void sort_container(Container &con, PairContainer &pairs){
    int struggler = -1;
    Container a;
    Container b;
    Container insert_order;

    if (con.size() == 1)
        return;
    if (isOdd(con.size()))
        struggler = con.back();

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

    sort_pair_container(pairs.begin(), pairs.end());

    //generate main and pend chain
    typename PairContainer::iterator pair_it = pairs.begin();
    a.push_back(pair_it->second);
    a.push_back(pair_it->first);
    pair_it++;
    for (; pair_it != pairs.end(); pair_it++){
        a.push_back(pair_it->first);
        b.push_back(pair_it->second);
    }

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
    
    //insert elements from b to a with binary search
    typename Container::iterator value_to_insert;
    typename Container::iterator index_in_a;
    for (typename Container::iterator itt = insert_order.begin(); itt != insert_order.end(); itt++){
        value_to_insert = b.begin() + *itt - 1;
        index_in_a = binarySearch<Container>(a.begin(), a.end(), *value_to_insert);
        a.insert(index_in_a, *value_to_insert);
    }
    // for (typename Container::iterator itt = b.begin(); itt != b.end(); itt++){
    //     value_to_insert = itt;
    //     index_in_a = binarySearch<Container>(a.begin(), a.end(), *value_to_insert);
    //     a.insert(index_in_a, *value_to_insert);
    // }
    if (b.size() > 0) //push last element of b to a
    {
        index_in_a = binarySearch<Container>(a.begin(), a.end(), b.front());
        a.insert(index_in_a, b.front());
    }
    if(struggler != -1){
        index_in_a = binarySearch<Container>(a.begin(), a.end(), struggler);
        a.insert(index_in_a, struggler);
    }

    con = a;
}

static double get_time_us() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1e6 + tv.tv_usec;
}

static void print_execution_time(const std::string& container_name, int range_size, double start_time, double end_time) {
    double elapsed = end_time - start_time;
    std::cout << "Time to process a range of " << range_size << " elements with std::" 
              << container_name << " : " << std::fixed << std::setprecision(5) 
              << elapsed << " us" << std::endl;
}

int    PmergeMe::start_sorting(char **argv){

    std::vector<int>                    vec;
    std::vector<std::pair<int, int> >   vec_pairs;
    std::deque<int>                     deq;
    std::deque<std::pair<int, int> >    deq_pairs;

    

    double start_vec = get_time_us();
    if (save_to_container(vec, argv))
        return 1;
    sort_container(vec, vec_pairs);
    double end_vec = get_time_us();

    std::cout << "Before: ";
    for (int i = 1; argv[i]; i++){
        if(strlen(argv[i]) == 1)
            std::cout << argv[i];
        else{
            for(int j = 0; argv[i][j]; j++){
                if(isdigit(argv[i][j]))
                    std::cout << argv[i][j];
                else
                    continue;
                std::cout << " ";
            }  
        }
        std::cout << " ";
    }
    std::cout << std::endl;

    double start_deq = get_time_us();
    if (save_to_container(deq, argv))
        return 1;
    sort_container(deq, deq_pairs);
    double end_deq = get_time_us();

    std::cout << "After: ";
    print_container(vec);

    print_execution_time("vector", vec.size(), start_vec, end_vec);
    print_execution_time("deque", deq.size(), start_deq, end_deq);
    
    return 0;
};
