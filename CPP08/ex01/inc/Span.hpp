#pragma once

#include <iostream>
#include <algorithm>
#include <exception>
#include <vector>


class Span{
    private:
        std::vector<int> _vector;
        unsigned int _N;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span &copy);
        Span &operator=(const Span &src);
        ~Span();

        void addNumber(int nbr);
        void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan();
        int longestSpan();

        const std::vector<int>& getVector() const;
};
