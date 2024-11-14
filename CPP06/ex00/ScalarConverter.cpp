#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "ScalarConverter Constructor" << std::endl;
};

ScalarConverter::ScalarConverter(ScalarConverter &copy){
    std::cout << "ScalarConverter Copy Constructor" << std::endl;
    *this = copy;
};

ScalarConverter::~ScalarConverter(){
    std::cout << "ScalarConverter Destructor" << std::endl;
};

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &src){
    std::cout << "ScalarConverter Assignment Operator" << std::endl;
    if(this == &src)
        return *this;
    return *this;
};

static std::variant<int,float,double, std::string> convert(std::string &str){
    
};