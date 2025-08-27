#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
    private:

        Contact contacts[8];
        int     contacts_count;

    public:
    
        PhoneBook();
        int     functionality();
        void    search(int s_index);
        void    add_conts();
        void    display(int s_index);
        void    show_all_contacts(int s_index);
};

#endif