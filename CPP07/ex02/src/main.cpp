#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);

    
    std::cout << "TEST 1: compares class created int array with normal created int array" << std::endl;
    int* mirror = new int[MAX_VAL];

    //fill both with random values
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    std::cout << "Both arrays are the same" << std::endl;
    std::cout << std::endl;

    std::cout << "TEST 2: check copy and assignment" << std::endl;
    {
        std::cout << "tmp:" << std::endl;
        Array<int> tmp = numbers; 
        std::cout << "test:" << std::endl;
        Array<int> test(tmp);
    }
    
    
    std::cout << std::endl;
    std::cout << "TEST 3: check size" << std::endl;
    std::cout << numbers.size() << std::endl;
    std::cout << std::endl;


    std::cout << "TEST 4: check out of bounds" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
    delete [] mirror;//
    return 0;
}

/*
- delete of numbers not necessary, because it is a class and the destructor is called automatically (numbers[] goes out of scope)
- delete of mirror necessary, because it is a pointer
*/