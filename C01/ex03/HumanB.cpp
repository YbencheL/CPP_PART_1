#include "HumanB.hpp"

HumanB::HumanB(std::string caller) : name(caller), weapon(NULL)
{

}

void HumanB::setWeapon(Weapon& s)
{
    weapon = &s;
}

void HumanB::attack()
{
    if (weapon->getType().empty())
        std::cout << name << " doesn't have weapon" << std::endl;
    else
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}