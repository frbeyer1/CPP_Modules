#pragma once

#include <iostream>

template < typename T >
void iter(T *arr, int length, void (*f)(T &))
{
    if(!arr || !f)
        return;
    for (int i = 0; i < length; i++)
        f(arr[i]);
}

/*
- works with arrays of every type
- void (*f)(T &): A function pointer to a function that takes a reference to T and returns void.
*/