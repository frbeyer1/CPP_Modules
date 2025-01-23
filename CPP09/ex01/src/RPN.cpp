#include "RPN.hpp"

RPN::RPN(){}

RPN::RPN(const RPN &copy){
    this->numbers = copy.numbers;
}

RPN::~RPN(){}

RPN &RPN::operator=(const RPN &src){
    this->numbers = src.numbers;
    return (*this);
}

void RPN::calculate(std::string input){
    float a,b ;

    if(input.empty())
        return;
    for(size_t i = 0; i < input.length(); i++){
        if(iswspace(input[i]))
            continue;
        else if(isdigit(input[i]))
            numbers.push(input[i] - '0');
        else if(input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/'){
            if(numbers.size() < 2){
                std::cerr << "Error: invalid value" << std::endl;
                return;
            }
            a = numbers.top();
            numbers.pop();
            b = numbers.top();
            numbers.pop();
            if(input[i] == '+')
                numbers.push(a + b);
            if(input[i] == '-')
                numbers.push(a - b);
            if(input[i] == '*')
                numbers.push(a * b);
            if(input[i] == '/')
                numbers.push(a / b);
        }
        else{
            std::cerr << "Error: invalid character" << std::endl;
            return;
        }
    }
    if(numbers.size() != 1)
        std::cerr << "Error: invalid result" << std::endl;
    else
        std::cout << numbers.top() << std::endl;
}
