#include "isprintable.hpp"

std::string isPrintableString()
{
    std::string   key;
    std::string word;
    bool        valid;

    while (true)
    {
        if (!std::getline(std::cin, word))
        {
            if (std::cin.eof())
                exit(0);
        }
        valid = true;
        for (size_t i = 0; i < word.size(); i++)
        {
            if (!std::isprint(static_cast<unsigned char>(word[i])))
            {
                valid = false;
                break;
            }
        }
        if (valid && !word.empty() && word.find_first_not_of(' ') != std::string::npos) 
            return word;
        std::cout << "Invalid input, try again: ";
    }
    return word;
}


int isPrintableInt()
{
    std::string num;
    bool valid;
    int value;

    while (true)
    {
        if (!std::getline(std::cin, num))
        {
            if (std::cin.eof())
                exit(0);
        }
        valid = true;
        for (size_t i = 0; i < num.size(); i++)
        {
            if (!std::isdigit(num[i]))
            {
                valid = false;
                break;
            }
        }
        if (valid && !num.empty())
        {
            value = std::atoi(num.c_str());
            return value;
        }
        std::cout << "Invalid input, try again: ";
    }
}