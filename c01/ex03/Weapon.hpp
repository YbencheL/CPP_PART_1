#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private :
        std::string type;
    public :
        Weapon();
        Weapon(std::string wep);
        void setType(std::string newType);
        std::string getType();
};

#endif