#include "harl.hpp"

harl::harl(void){
}

void harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
};
void harl::info( void ){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
};
void harl::warning( void ){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
};
void harl::error( void ){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
};

void harl::complain( std::string level ){
    f_ptr    f_ptr[] = {&harl::debug, &harl::info, &harl::warning, &harl::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (levels[i].compare(level) == 0)
            (this->*f_ptr[i])();
    }
};
