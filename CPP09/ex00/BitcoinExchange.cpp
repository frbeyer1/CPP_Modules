#include "BitcoinExchange.hpp"
// multimap

BitcoinExchange::BitcoinExchange(){}
BitcoinExchange::~BitcoinExchange(){}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
   this->_database = copy._database;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& in)
{
    this->_database = in._database;
    return (*this);    
}

void BitcoinExchange::readDatabase()
{
    std::ifstream file("data.csv");
    std::string data;

    if (!file.is_open())
    {
        std::cerr << "data.csv not found" << std::endl;
        exit(1);
    }
    while (std::getline(file, data))
    {
       
    }
    file.close();
}
