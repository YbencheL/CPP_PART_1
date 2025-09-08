#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
    std::cout << "FragTrap param constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
    Name = obj.Name;
    hit_points = obj.hit_points;
    energy_points = obj.energy_points;
    attack_damage = obj.attack_damage;
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& obj)
{
    if (this != &obj)
    {
        Name = obj.Name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    return *this;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap says, FIVE UP!!!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor is called" << std::endl;
}