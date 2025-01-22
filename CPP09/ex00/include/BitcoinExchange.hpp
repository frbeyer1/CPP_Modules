#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
#include <string>
#include <ctime>
#include <cstring>

class BitcoinExchange{
    private:
        std::multimap<std::string, float> _database;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        ~BitcoinExchange();
        BitcoinExchange &operator=(const BitcoinExchange &src);
        void    readDatabase();
        void    saveValues(std::string data);
        void    readInput(char *argv);
        bool    checkDate(std::string date);
        float   checkValue(std::string value);
        void    calculate(std::string date, float value);
};
