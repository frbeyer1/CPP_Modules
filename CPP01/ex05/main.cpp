#include "Harl.hpp"

int main()
{
    std::string input;
    Harl        harl;

    do
    {
        std::cout << "please input a level" << std::endl;
        std::cin >> input;
        harl.complain(input);
    } while (input != "EXIT");
                                   
    return(0);
}