#include "Zombie.hpp"

int main() {

    Zombie* z1 = newZombie("HeapZombie");
    z1->announce();
    delete z1;

    std::cout << "----------------\n";

    randomChump("StackZombie");

    std::cout << "----------------\n";

    Zombie* z2 = newZombie("ZombieA");
    Zombie* z3 = newZombie("ZombieB");
    z2->announce();
    z3->announce();
    randomChump("ZombieC");
    delete z2;
    delete z3;

    return 0;

}
