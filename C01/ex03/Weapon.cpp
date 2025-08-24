#include "Weapon.hpp"

Weapon::Weapon() : type("")
{

}

Weapon::Weapon(std::string wep) : type(wep)
{

}

void Weapon::setType(std::string newType)
{
    type = newType;
}

std::string Weapon::getType()
{
    return type;
}