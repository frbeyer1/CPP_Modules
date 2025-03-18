#pragma once

#include <iostream>
#include <iterator>
#include <exception>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:

        MutantStack() : std::stack<T>(){
            std::cout << "Default Constructor" << std::endl;
        };

        MutantStack(const MutantStack &copy) : std::stack<T>()
        {
            std::cout << "Copy Constructor" << std::endl;
            *this = copy;
        };

        MutantStack &operator=(const MutantStack &src){
            std::cout << "Assignment Operator" << std::endl;
            return (*this);
        };

        ~MutantStack(){
            std::cout << "Destructor" << std::endl;
        };
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin(){
            return this->c.begin();
        }
        iterator end(){
            return this->c.end();
        }
        const_iterator begin() const{
            return this->c.begin();
        }
        const_iterator end() const{
            return this->c.end();
        }
};

/*
Purpose:
    - stack is designed for following the LIFO method, providing better efficiency when needed (only top element gets accesed)
    - stack does not have begin() and end() functions
    - here: define iterators and begin(), end() methods
*/