#pragma once

#include <iostream>

template < typename T >
void iter(T *arr, int length, void (*f)(T &))
{
    // if(!arr || !f)
    //     return;
    for (int i = 0; i < length; i++)
        f(arr[i]);
}