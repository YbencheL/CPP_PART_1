#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>

class Contact
{
    private:

        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string dark_secret;

    public:
    
        std::string get_firstname();
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_dark_secret();
        void        column_formating(std::string text);
        void        add_conts_val();
};

#endif