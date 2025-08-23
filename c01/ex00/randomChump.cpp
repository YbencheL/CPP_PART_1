#include "Zombie.hpp"

void Zombie::randomChump( std::string name )
{
    Zombie newZomb;

    newZomb.set_name(name);
    newZomb.announce();
}