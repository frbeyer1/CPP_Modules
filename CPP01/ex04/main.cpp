#include "file.hpp"

int main(int ac, char **av)
{
    if(ac == 4)
    {
        file File(av[1]);
        File.replace_content(av[2], av[3]);
    }
    else
        std::cerr << "wrong input" << std::endl;
    return (0);
}
