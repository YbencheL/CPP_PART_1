#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string n) : Name(n), hit_points(10),
                                    energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Param constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj) : Name(obj.Name), hit_points(obj.hit_points),
                                            energy_points(obj.energy_points), attack_damage(obj.attack_damage)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    if (this != &obj)
    {
        Name = obj.Name;
        hit_points = obj.hit_points;
        energy_points = obj.energy_points;
        attack_damage = obj.attack_damage;
    }
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
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
            std::cout << "Claptrap " << Name << " attacks " << target << ", causing ";
            std::cout << attack_damage << " points of damage!" << std::endl;
        }
        else
        {
            std::cout << "No energy points left" << std::endl;
            return ;
        }
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points == 0 || amount > hit_points)
    {
        std::cout << "No health points left, ";
        std::cout << Name << " took too much damage HIS DEAD!!!" << std::endl;
        hit_points = 0;
        return ;
    }else
    {
        hit_points -= amount;
        std::cout << "Claptrap " << Name << " took ";
        std::cout << amount << " points of damage, his total health now is " << hit_points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points != 0)
    {
        if (energy_points != 0)
        {
            energy_points -= 1;
            hit_points += amount;
            std::cout << "Claptrap " << Name << " repaired its damage adding ";
            std::cout << amount << " to his total health, which is now : ";
            std::cout << hit_points << std::endl;
        }
        else
        {
            std::cout << "No energy points left" << std::endl;
            return ;
        }
    }else
    {
        std::cout << "cannot repair " << Name << " his already dead" << std::endl;
        return ;
    }
}