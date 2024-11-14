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

static int     ToInt(std::string &str){
    int converted = atoi(str.c_str());
    return(converted);
};

static double  ToDouble(std::string &str){
    double converted = atof(str.c_str());
    return(converted);
};

static float  ToFloat(std::string &str){
    float converted = atof(str.c_str());
    return(converted);
};

// static bool checkInt(std::string literal){
    
// }
static bool checkChar(std::string literal){
    for(size_t i = 0; i < literal.length(); i++)
    {
        if(!isalpha(literal[i]))
            return false;
        if(!isascii(literal[i]))
            return false;
    }
    return true;
};
static e_type checkType(std::string literal)
{
    if(checkChar(literal) == true)
        return Char;
    // if(checkInt(literal) == true)
    //     return Int;
    // if(!isalpha(literal[0]))
    // {
    //     for(size_t i = 0; i < literal.length(); i++)
    //     {
    //         if(literal.compare("."))
    //         {
    //             for(;i < literal.length(); i++)
    //                 if(!literal.compare("f"))
    //                     return(Float);
    //             return(Double);
    //         }
    //     }
    //     return (Int);
    // }
    // (void)literal;
    // return(Char);
    return NonPrintable;
};

void ScalarConverter::convert(std::string literal)
{
    e_type type;
    type = checkType(literal);
    // switch (type){
    //     case Char
    //     td::cout << "Char: " << literal << std::endl;
    //     break;
    // }
    if(type == Int)
        std::cout << "Int: " << ToInt(literal) << std::endl;
    // std::cout << "Char: " << ToChar(literal) << sdt::endl;
    if(type == Double)
        std::cout << "Double: " << ToDouble(literal) << std::endl;
    if(type == Float)
        std::cout << "Float: " << ToFloat(literal) << std::endl;
    if(type == Char)
        std::cout << "Char: " << literal << std::endl;
};

