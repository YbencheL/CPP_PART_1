#include "Zombie.hpp"

Zombie::Zombie(std::string n) : name(n)
{

}

Zombie::~Zombie()
{
    std::cout << name << " is now destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}