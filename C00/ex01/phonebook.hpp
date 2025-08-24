#include <iostream>
#include <iomanip>
#include "contact.hpp"

class PhoneBook{
    private:
        Contact contacts[8]; 
        int     contacts_count;
    public:
        PhoneBook();
        int     functionality();
        void    search(int s_index);
        void    add_conts();
        void    display(int s_index);
};