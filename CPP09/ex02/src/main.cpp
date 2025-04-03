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

/*
about containers used:
- Both support random access, but std::vector is typically faster due to its contiguous memory layout

vector:
- stores elements contiguously in a single block of memory
- supports efficient insertion and deletion at the end (push_back, pop_back)
- generally offers better cache locality due to contiguous storage (data is stored in a single, uninterrupted block of consecutive memory addresses),
  leading to faster iteration and random access
- may need to reallocate and copy all elements when it grows beyond its capacity
- may use more memory than necessary due to over-allocation for growth

deque:
- uses multiple smaller arrays linked together, allowing for more flexible memory management
- allows efficient insertion and deletion at both ends (push_front, push_back, pop_front, pop_back)
- is more efficient for frequent insertions and deletions at the front of the container
- allocating new blocks as needed, making it more efficient for unpredictable growth

*/