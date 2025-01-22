#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        BitcoinExchange test;
        test.readDatabase();
        test.readInput(argv[1]);
        // std::multimap<std::string, double>::iterator it;
        // for (it = test._database.begin(); it != test._database.end(); ++it) {
        //     std::cout << it->first << " => " << it->second << '\n';
        // }
    }
    else
        std::cout << "Error: could not open file." << std::endl;
}