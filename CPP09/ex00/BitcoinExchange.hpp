#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstring> 

class BitcoinExchange{
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &src);
        void readDatabase();
        void readParse(char *argv);
        void checkDate(std::string date);

    private:
        std::multimap<std::string, float> _database;
};
