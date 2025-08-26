#include "Zombie.hpp"

int main() {
    Zombie z("HeapZombie");

    Zombie* z1 = z.newZombie("HeapZombie");
    z1->announce();
    delete z1;

    std::cout << "----\n";

    z.randomChump("StackZombie");

    std::cout << "----\n";

    Zombie* z2 = z.newZombie("ZombieA");
    Zombie* z3 = z.newZombie("ZombieB");
    z2->announce();
    z3->announce();
    z.randomChump("ZombieC");
    delete z2;
    delete z3;

    return 0;
}
