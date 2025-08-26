#include "HumanA.hpp"

HumanA::HumanA(std::string call, Weapon& w) : name(call), weapon(w)
{

}


void HumanA::attack()
{
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}