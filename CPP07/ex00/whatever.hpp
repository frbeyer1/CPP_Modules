#pragma once

#include <iostream>

template < typename T >
void swap(T &x, T &y){
    T tmp = x;
    x = y;
    y = tmp;
}

template < typename T >
T const &min(T const &x, T const &y){ //refernce better for efficiency, imagine copying a big class everytime 
    return(x<=y ? x : y);// condition ? value_if_true : value_if_false
}

template < typename T >
T const &max(T const &x, T const &y){ //refernce better for efficiency, imagine copying a big class everytime 
    return(x>=y ? x : y);
}