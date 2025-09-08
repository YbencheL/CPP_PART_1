#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== ClapTrap Tests =====" << std::endl;
    {
        ClapTrap ct1("Clapper");
        ct1.attack("Victim1");
        ct1.takeDamage(5);
        ct1.beRepaired(3);

        ClapTrap ct2(ct1);
        ct2.attack("Victim2");

        ClapTrap ct3("Fake clapper");
        ct3 = ct1;
        ct3.attack("Victim3");
    }
    std::cout << "===== End of ClapTrap scope =====" << std::endl;

    std::cout << "\n===== ScavTrap Tests =====" << std::endl;
    {
        ScavTrap st1("Scaver");
        st1.attack("Scaved1");     
        st1.takeDamage(30);        
        st1.beRepaired(20);        
        st1.guardGate();          

        ScavTrap st2(st1);         
        st2.attack("Scaved2");

        ScavTrap st3;
        st3 = st1;             
        st3.attack("Scaved3");
    }
    std::cout << "===== End of ScavTrap scope =====" << std::endl;

    return 0;
}

