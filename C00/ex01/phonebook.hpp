#include <algorithm>
#include <iostream>
#include <iomanip>
#include <limits>
#include <cstdlib>
#include "contact.hpp"

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