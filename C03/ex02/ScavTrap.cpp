#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
    std::cout << "ScavTrap param constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
    Name = obj.Name;
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_damage = obj.attack_damage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
    if (this != &obj)
    {
        Name = obj.Name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points == 0)
    {
        std::cout << "No health points left, ";
        std::cout << Name << " took too much damage HIS DEAD!!!" << std::endl;
        return ;
    }
    else
    {
        if (energy_points != 0)
        {
            energy_points -= 1;
            std::cout << "ScavTrap " << Name << " attacks " << target << ", causing ";
            std::cout << attack_damage << " points of damage!" << std::endl;
        }
        else
        {
            std::cout << "No energy points left" << std::endl;
            return ;
        }
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor is called" << std::endl;
}