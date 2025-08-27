#include "Contact.hpp"
#include "isprintable.hpp"

void    Contact::add_conts_val()
{
    std::cout << "First name : ";
    first_name = isPrintableString();
    std::cout << "Last name : ";
    last_name = isPrintableString();
    std::cout << "Nickname : ";
    nickname = isPrintableString();
    std::cout << "Phone number : ";
    phone_number = isPrintableString();
    std::cout << "Dark secret : ";
    dark_secret = isPrintableString();
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
