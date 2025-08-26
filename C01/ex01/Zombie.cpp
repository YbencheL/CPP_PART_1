#include "Zombie.hpp"

Zombie::Zombie()
{

}

void Zombie::set_name(std::string& name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "All Zombies are now destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}