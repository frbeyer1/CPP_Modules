#include "Serializer.hpp"

Data::Data(){
    std::cout << "Serializer Constructor" << std::endl;
};

Data::Data(Data &copy){
    std::cout << "Serializer Copy Constructor" << std::endl;
    *this = copy;
};

Data::~Data(){
    std::cout << "Serializer Destructor" << std::endl;
};

Data &Data::operator=(const Data &src){
    std::cout << "ScalarConverter Assignment Operator" << std::endl;
    if(this == &src)
        return *this;
    return *this;
};

uintptr_t serialize(Data *ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
};
Data *deserialize(uintptr_t raw){
    return(reinterpret_cast<Data *>(raw));
};