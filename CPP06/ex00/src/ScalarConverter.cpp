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

static bool checkChar(std::string literal){
    if(literal.length() == 1 && !isdigit(literal[0]))
    {
        if(!isascii(literal[0]) && !isprint(literal[0]))
            return false;
        return true;
    }
    return false;
};

static bool checkInt(std::string literal)
{
    if(literal.length() == 1 && (literal[0] == '+' || literal[0] == '-'))
        return false;
    if(!isdigit(literal[0]) && literal[0] != '+' && literal[0] != '-')
        return false;
    for(size_t i = 1; i < literal.length(); i++)
    {
        if(!isdigit(literal[i]))
            return false;
    }
    return true;
};

static bool checkDouble(std::string literal){
    int count_comma = 0;
    if(literal.compare("nan") == 0 || literal.compare("-inf") == 0 || literal.compare("+inf") == 0 )
        return true;
    for(size_t i = 0; i < literal.length(); i++)
    {
        if(!isdigit(literal[i]))
        {
            if ((literal[i] == '+' || literal[i] == '-'))
            {
                if(literal.length() == 1)
                    return false;
                else if (i > 0)
                    return false;
            }
            else if(literal[i] == '.')
                count_comma++;
            else
                return false;
        }
    }
    if(count_comma == 1)
        return true;
    else
        return false;
};

static bool checkFloat(std::string literal){
    int count_comma = 0;

    for(size_t i = 0; i < literal.length(); i++)
    {
        if(literal.compare("nanf") == 0  || literal.compare("-inff") == 0 || literal.compare("+inff") == 0 )
            return true;
        if(!isdigit(literal[i]) && literal[i] != 'f')
        {
            if ((literal[i] == '+' || literal[i] == '-'))
            {
                if(literal.length() == 1)
                    return false;
                else if (i > 0)
                    return false;
            }
            else if(literal[i] == '.')
                count_comma++;
            else
                return false;
        }
    }
    if(count_comma <= 1 && literal[literal.length() - 1] == 'f')
        return true;
    else
        return false;

};

static e_type checkType(std::string literal)
{
    if(checkChar(literal) == true)
        return Char;
    if(checkInt(literal) == true)
        return Int;
    if(checkDouble(literal) == true)
        return Double;
    if(checkFloat(literal) == true)
        return Float;
    return NonDisplayable;
};

static void CharConversion(std::string literal){
    std::cout << "char: '" << literal[0]<< "'" << std::endl;
    std::cout << "int: " << static_cast<int>(literal[0]) << std::endl;
    std::cout << "float: " << static_cast<float>(literal[0]) << ".0f" <<  std::endl;
    std::cout << "double: " << static_cast<double>(literal[0]) << ".0" <<  std::endl;
};

static void IntConversion(std::string literal){
    double toDouble = strtod(literal.c_str(), NULL);

    if (isprint(toDouble))
        std::cout << "char: '" << static_cast<char>(toDouble) << "'" << std::endl;
    else if (isascii(toDouble))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: overflow" << std::endl;

    if(toDouble <= INT_MAX || toDouble >= INT_MIN)
        std::cout << "int: " << static_cast<int>(toDouble) << std::endl;
    else
        std::cout << "int: overflow" << std::endl;

    // if(toInt < 1000006 && toInt > -1000006)
    std::cout << "float: " << static_cast<float>(toDouble) << ".0f" <<  std::endl;
    // else
        // std::cout << "float: " << toFloat << "f" <<  std::endl;

    std::cout << "double: " << toDouble << ".0" <<  std::endl;
};

static void  FloatConversion(std::string literal){
    float toFloat = atof(literal.c_str());

    if(literal.compare("nanf") == 0  || literal.compare("-inff") == 0 || literal.compare("+inff") == 0 )
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << toFloat << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(toFloat)<<  std::endl;
        return ;
    }

    if (isprint(toFloat))
        std::cout << "char: '" << static_cast<char>(toFloat) << "'" << std::endl;
    else if (isascii(toFloat))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: overflow" << std::endl;

    if(toFloat <= INT_MAX || toFloat >= INT_MIN)
        std::cout << "int: " << static_cast<int>(toFloat) << std::endl;
    else
        std::cout << "int: overflow" << std::endl;

    if (toFloat - static_cast<int>(toFloat) == 0)
    {
        std::cout << "float: " << toFloat << ".0f" <<  std::endl;
        std::cout << "double: " << static_cast<double>(toFloat) << ".0" <<  std::endl;
    }
    else
    {
        std::cout << "float: " << toFloat << "f" <<  std::endl;
        std::cout << "double: " << static_cast<double>(toFloat) << "0" <<  std::endl;
    }
    // if( < 1000006 && > -1000006) ??????
    // else
        // std::cout << "float: " << toFloat << "f" <<  std::endl;
};

static void  DoubleConversion(std::string literal){
   double toDouble = strtod(literal.c_str(), NULL);

    if(literal.compare("nan") == 0  || literal.compare("-inf") == 0 || literal.compare("+inf") == 0 )
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << static_cast<float>(toDouble) << "f" << std::endl;
        std::cout << "double: " << toDouble <<  std::endl;
        return ;
    }

    if (isprint(toDouble))
        std::cout << "char: '" << static_cast<char>(toDouble) << "'" << std::endl;
    else if (isascii(toDouble))
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: overflow" << std::endl;

    if(toDouble <= INT_MAX || toDouble >= INT_MIN)
        std::cout << "int: " << static_cast<int>(toDouble) << std::endl;
    else
        std::cout << "int: overflow" << std::endl;

    if (toDouble - static_cast<int>(toDouble) == 0)
    {
        std::cout << "float: " << static_cast<float>(toDouble) << ".0f" <<  std::endl;
        std::cout << "double: " << toDouble << ".0" <<  std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(toDouble) << "f" <<  std::endl;
        std::cout << "double: " << toDouble <<  std::endl;
    }
};

void ScalarConverter::convert(std::string literal)
{
    e_type type;
    type = checkType(literal);
    switch (type){
        case Char:
        CharConversion(literal);
        break;
        case Int:
        IntConversion(literal);
        break;
        case Float:
        FloatConversion(literal);
        break;
        case Double:
        DoubleConversion(literal);
        break;
        case NonDisplayable:
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: impossible" << std::endl;
        std::cout << "double: impossible" <<  std::endl;
        break;
    }
};

