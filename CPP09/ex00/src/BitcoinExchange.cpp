#include "BitcoinExchange.hpp"

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

void BitcoinExchange::saveValues(std::string data)
{
    std::string date;
    float value;

    date = data.substr(0, data.find(','));
    value = atof(data.substr(data.find(',') + 1, data.length()).c_str());

    _database.insert(std::pair<std::string, float>(date, value));
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
       if(data != "date, exchange rate")
            saveValues(data);
    }
    file.close();
    
}

bool BitcoinExchange::checkDate(std::string date)
{
    int year, month, day;
    struct tm t_date = {};

    if(date.length() != 10)
        return false;
    if(date[4] != '-' || date[7] != '-')
        return false;
    for(int i = 0; i < 10; i++)
    {
        if(i == 4 || i == 7)
            continue;
        if(date[i] < '0' || date[i] > '9')
            return false;
    }

    year = atoi(date.substr(0, 4).c_str());
    month = atoi(date.substr(5,7).c_str());
    day = atoi(date.substr(8).c_str());
    
    t_date.tm_year = year - 1900;
    t_date.tm_mon = month - 1;
    t_date.tm_mday = day;

    time_t cal = mktime(&t_date);
    if (cal == -1)
        return (false);
    if (t_date.tm_year != year - 1900 || t_date.tm_mon != month - 1 || t_date.tm_mday != day)
        return (false);
    return true;
}

float BitcoinExchange::checkValue(std::string value)
{
    if(value[0] == '.')
        return -1.0;
    if(!value.empty())
    {
        if(atof(value.c_str()) < 0.0){
            std::cout << "Error: Negative Value" << std::endl;
            return -2.0;
        }
        else if (atof(value.c_str()) > 1000)
        {
            std::cout << "Error: Value too large" << std::endl;
            return -2.0;
        }
        else
            return atof(value.c_str());
    }
    return -1.0;
}

void BitcoinExchange::calculate(std::string date, float value)
{
    std::map<std::string, float>::iterator it = _database.find(date);
    if(it != _database.end())
        std::cout << date << " => " << value << " = " << value*it->second << std::endl;
    else
    {
        std::map<std::string, float>::iterator lowerDate;
        for (it = _database.begin(); it != _database.end(); ++it)
        {
            if(it->first <= date)
                lowerDate = it;
            else
                break;
        }
        if(it == _database.begin())
            std::cout << date << " => " << value << " = " << value*it->second << std::endl;
        else
            std::cout << date << " => " << value << " = " << value*lowerDate->second << std::endl;
    }
        
}

void BitcoinExchange::readInput(char *argv)
{
    std::ifstream file(argv);
    std::string line;
    std::string date;
    float value;

    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        exit(1);
    }
    while (std::getline(file, line))
    {
        if(line.empty())
            continue;
        if(line != "date | value")
        {
            size_t pos = line.find('|');
            if(pos == std::string::npos || pos == 0 || pos == line.length() - 1)
            {
                std::cout << "Error: Invalid Input" << std::endl;
                continue;
            }
            date = line.substr(0, pos-1);
            if(!checkDate(date)){
                std::cout << "Error: Invalid Date" << std::endl;
                continue;
            }
            value = checkValue(line.substr(pos + 2, line.length()));
            if(value == -1.0)
            {
                std::cout << "Error: Invalid Value" << std::endl;
                continue;
            }
            else if(value == -2.0)
                continue;
            calculate(date, value);
        }
    }
    file.close();
}
