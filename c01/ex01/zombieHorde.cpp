#include "Zombie.hpp"

Zombie* Zombie::zombieHorde( int N, std::string name )
{
    Zombie* Zombo;

    Zombo = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        Zombo[i].set_name(name);
    }
    return Zombo;
}