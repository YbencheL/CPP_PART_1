#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private : 

        std::string name;
        Weapon&     weapon;

    public :

        HumanA(std::string call, Weapon& weapon);
        void attack();
};