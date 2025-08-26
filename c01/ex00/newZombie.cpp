#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
    Zombie* newZomb;

    newZomb = new Zombie(name);
    return newZomb;
}