#include "Zombie.hpp"

int main() {
    Zombie z;

    Zombie* Z1 = z.zombieHorde(10, "Zombozo");
    for (int i = 0; i < 10; i++)
    {
        Z1->announce();
    }
    delete[] Z1;
    std::cout << "------------------" << std::endl;
    Zombie* Z2 = z.zombieHorde(10, "Zimbaza");
    for (int i = 0; i < 10; i++)
    {
        Z2->announce();
    }
    delete[] Z2;
    return 0;
}
