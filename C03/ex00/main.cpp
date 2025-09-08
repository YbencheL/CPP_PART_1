#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    ClapTrap b("Bob");
    ClapTrap d;
    d = b;

    a.takeDamage(2);
    std::cout << "\n=== Attack test (energy drain) ===" << std::endl;
    for (int i = 0; i < 11; i++)
        b.attack("target dummy");

    std::cout << "\n=== Take damage test ===" << std::endl;
    b.takeDamage(3);
    b.takeDamage(15);
    b.takeDamage(1);

    std::cout << "\n=== Repair test ===" << std::endl;
    ClapTrap e("Eddie");
    e.takeDamage(5);
    e.beRepaired(3); 
    e.takeDamage(15);
    e.beRepaired(5);

    std::cout << "\n=== End of scope, destructors will be called ===" << std::endl;
    return 0;
}
