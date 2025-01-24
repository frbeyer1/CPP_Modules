#pragma once

#include <iostream>
#include <iterator>
#include <exception>
#include <stack>
#include <cwctype>

class RPN{
    private:
        std::stack<float> numbers;

    public:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN &operator=(const RPN &src);

        int calculate(std::string input);
};