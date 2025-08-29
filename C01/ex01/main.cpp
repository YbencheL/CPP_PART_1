#include "Zombie.hpp"

int main() {

    Zombie* Z1 = zombieHorde(10, "Zombozo");
    for (int i = 0; i < 10; i++)
    {
        Z1[i].announce();
    }
    delete[] Z1;

    std::cout << "------------------" << std::endl;

    Zombie* Z2 = zombieHorde(10, "Zimbaza");
    for (int i = 0; i < 10; i++)
    {
        Z2[i].announce();
    }
    delete[] Z2;
    return 0;
}
