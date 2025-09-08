#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
    
        std::string          Name;
        unsigned int         hit_points;
        unsigned int         energy_points;
        unsigned int         attack_damage;

    public:

        ClapTrap();
        ClapTrap(std::string n);
        ClapTrap(const ClapTrap& obj);
        ClapTrap& operator=(const ClapTrap& obj);
        void      attack(const std::string& target);
        void      takeDamage(unsigned int amount);
        void      beRepaired(unsigned int amount);
        ~ClapTrap();
};


#endif