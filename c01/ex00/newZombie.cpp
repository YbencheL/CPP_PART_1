#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name )
{
    Zombie* newZomb;

    newZomb = new Zombie;
    newZomb->set_name(name);
    return newZomb;
}