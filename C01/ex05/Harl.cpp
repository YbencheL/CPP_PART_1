#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string arr1[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*arr2[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i;

    i = 0;
    while(arr1[i] != level && i < 4)
        i++;
    if (level != "DEBUG" && level != "INFO" && level != "WARNING" && level != "ERROR")
    {
        std::cout << "ERROR: Invalid level" << std::endl;
        return ;
    }
    (this->*arr2[i])();
}
