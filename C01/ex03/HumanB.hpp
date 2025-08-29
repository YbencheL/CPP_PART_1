#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private :

        std::string name;
        Weapon*     weapon;

    public :

        HumanB(std::string caller);
        void setWeapon(Weapon& s);
        void attack();
};