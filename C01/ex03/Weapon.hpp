#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    private :

        std::string type;

    public :
    
        Weapon();
        Weapon(std::string wep);
        void                setType(std::string newType);
        const std::string&  getType() const;
};

#endif