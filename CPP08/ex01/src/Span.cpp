#include "Span.hpp"
#include <climits>

Span::Span() : _N(0){
    std::cout << "Default Constructor array size = 0" << std::endl;
};

Span::Span(unsigned int N) : _N(N){
    std::cout << "Constructor array size = "<< N << std::endl;
};

Span::Span(const Span &copy){
    std::cout << "Copy Constructor"<< std::endl;
    *this = copy;
};

Span &Span::operator=(const Span &src){
    std::cout << "Assignment Operator"<< std::endl;
    _N = src._N;
    _vector = src._vector;
    return (*this);
};

Span::~Span(){
    std::cout << "Destructor" << std::endl;
    _vector.clear();
};

void Span::addNumber(int nbr){
    if(_vector.size() >= _N){
        throw std::out_of_range("Limit of N numbers reached!");
    }
    _vector.push_back(nbr);
};

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
    if(_vector.size() + distance(begin, end) > _N){
        throw std::out_of_range("Limit of N numbers reached!");
    }
    _vector.insert(_vector.end(), begin, end);
};

int Span::shortestSpan(){
    if(_vector.size() < 2){
        throw std::runtime_error("Not enough numbers to find shortest span!");
    }
    std::sort(_vector.begin(), _vector.end());
    return(_vector[1] - _vector[0]);
};

int Span::longestSpan(){
    if(_vector.size() < 2){
        throw std::runtime_error("Not enough numbers to find longest span!");
    }
    std::sort(_vector.begin(), _vector.end());
    return(_vector[_N -1] - _vector[0]);
};
const std::vector<int>& Span::getVector() const{
    return(_vector);
};
