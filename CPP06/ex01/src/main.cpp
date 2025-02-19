#include "Serializer.hpp"

int main()
{
    Data *d = new Data();

    std::cout << d <<std::endl;
    uintptr_t ptr = serialize(d);
    Data *dptr = deserialize(ptr);
    std::cout << dptr << std::endl;
    delete d;
    return 0;
}