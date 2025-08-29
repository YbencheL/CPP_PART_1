#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie* Zombo;

    Zombo = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        Zombo[i] = Zombie(name);
    }
    return Zombo;
}