#include "iter.hpp"

void plusone(int &i)
{
    std::cout<< i + 1 << std::endl;
}

int main(){
    int arr[3] = {1,2,3};
    iter<int>(arr, 3, plusone);
    return 0;
}
/*
- iterates trough given array and applies function
*/