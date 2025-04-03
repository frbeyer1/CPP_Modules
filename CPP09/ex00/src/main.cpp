#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange test;
        test.readDatabase();
        test.readInput(argv[1]);
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}

/*
map:
    - Each element in the map is stored as a std::pair<const Key, Value>
    - Each key in the map must be unique
    - Fast lookups due to sorted keys
    - Automatic sorting of keys
    - Each element in std::map is stored as a node in the tree. A node typically contains:
        - The key-value pair (stored as std::pair<const Key, Value>).
        - Metadata required for the tree structure (e.g., pointers to child nodes, parent node, and color information for red-black trees).
    - A new node is dynamically allocated on the heap using the default allocator (std::allocator)
    - The key and value are constructed inside this node
    - By default, std::map uses std::allocator, which internally calls operator new to allocate memory for each node
    
    - Memory Usage During Operations:
        - Insertion: Allocates memory for the new node and constructs the key-value pair.
        - Lookup: Does not allocate memory unless operator[] is used with a non-existing key (which creates a new entry).
        - Deletion: Frees memory associated with the removed node.


*/