#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    contacts_count = 0;
}

int    PhoneBook::functionality()
{
    std::string command;
    Contact    c;
    int         s_index;
    
    s_index = 0;
    std::cout << "Enter a command [YOU CAN CHOOSE BETWEEN ADD SEARCH or EXIT] : ";
    std::cin >> command;
    if(std::cin.eof())
        exit(0);
    if (command == "ADD")
        add_conts();
    else if (command == "SEARCH")
    {
        c.column_formating("Index");
        std::cout << " | ";
        c.column_formating("First name");
        std::cout << " | ";
        c.column_formating("Last name");
        std::cout << " | ";
        c.column_formating("Nickname");
        std::cout << std::endl;
        for (int i = 0; i < contacts_count; i++)
            show_all_contacts(i);
        search(s_index);
    }
    else if (command == "EXIT")
        return 1;
    else
        std::cout << "Command does not exist try again" << std::endl;
    return 0;
}

void    PhoneBook::show_all_contacts(int s_index)
{
    Contact c;

    std::cout << std::setw(10) << s_index << " | ";
    c.column_formating(contacts[s_index].get_firstname());
    std::cout << " | ";
    c.column_formating(contacts[s_index].get_last_name());
    std::cout << " | ";
    c.column_formating(contacts[s_index].get_nickname());
    std::cout << std::endl;
}

void    PhoneBook::display(int s_index)
{
    Contact c;

    c.column_formating("Index");
    std::cout << " | ";
    c.column_formating("First name");
    std::cout << " | ";
    c.column_formating("Last name");
    std::cout << " | ";
    c.column_formating("Nickname");
    std::cout << std::endl;
    std::cout << std::setw(10) << s_index << " | ";
    c.column_formating(contacts[s_index].get_firstname());
    std::cout << " | ";
    c.column_formating(contacts[s_index].get_last_name());
    std::cout << " | ";
    c.column_formating(contacts[s_index].get_nickname());
    std::cout << std::endl;
}
void    PhoneBook::search(int s_index)
{
    while(true)
    {
        std::cout << "Enter an index to search for : ";
        std::cin >> s_index;
        if(std::cin.eof())
            exit(0);
        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "index is not a number" << std::endl;
            continue;
        }
        if (s_index < 0 || s_index >= contacts_count)
        {
            std::cout << "index doesn't exist or out of range{0..7}" << std::endl;
            continue;
        }
        display(s_index);
        break;
    }
}

void    PhoneBook::add_conts()
{
    if (contacts_count < 8)
    {
        contacts[contacts_count].add_conts_val();
        contacts_count += 1;
    }
    else
        contacts[contacts_count % 8].add_conts_val();
}