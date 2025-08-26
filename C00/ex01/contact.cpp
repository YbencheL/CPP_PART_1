#include "phonebook.hpp"

void    Contact::add_conts_val()
{
    std::cout << "First name : ";
    std::cin >> first_name;
    std::cout << "Last name : ";
    std::cin >> last_name;
    std::cout << "Nickname : ";
    std::cin >> nickname;
    std::cout << "Phone number : ";
    std::cin >> phone_number;
    if (std::cin.eof())
        exit(0);
    std::cout << "Dark secret : ";
    std::cin >> dark_secret;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    if (std::cin.eof())
        exit(0);
}

void Contact::column_formating(std::string text)
{
    std::string changed_text;

    if (text.length() > 10)
        changed_text = text.substr(0, 9) + ".";
    else
        changed_text = text;
    std::cout << std::setw(10) << changed_text;
}

std::string Contact::get_firstname()
{
    return first_name;
}
std::string Contact::get_last_name()
{
    return last_name;
}
std::string Contact::get_nickname()
{
    return nickname;
}
std::string Contact::get_phone_number()
{
    return phone_number;
}
std::string Contact::get_dark_secret()
{
    return dark_secret;
}
