#pragma once

#include <iostream>
#include <iterator>
#include <exception>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:

        MutantStack(){
            std::cout << "Default Constructor" << std::endl;
        };

        MutantStack(const MutantStack &copy);
        {
            std::cout << "Copy Constructor" << std::endl;
            *this = copy;
        };

        MutantStack &operator=(const MutantStack &src){
            std::cout << "Assignment Operator" << std::endl;
            if(this == &src)
                return(*this);
            return (*this);
        };

        ~MutantStack(){
            std::cout << "Destructor" << std::endl;
        };
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin(){
            return this->c.begin;
        }
        iterator end(){
            return this->c.end;
        }
        const_iterator begin() const{
            return this->c.begin;
        }
        const_iterator end() const{
            return this->c.end;
        }
};
