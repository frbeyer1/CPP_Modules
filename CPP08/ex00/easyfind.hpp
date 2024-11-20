#pragma once

#include <iostream>
#include <algorithm>
#include <exception>


template <typename T>
typename T::const_iterator easyfind(T &a, int i)
{
    typename T::const_iterator it;

    it = std::find(a.begin(), a.end(), i);
    if(it == a.end())
        throw std::exception();
    return(it);
}
