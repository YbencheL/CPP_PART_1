#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        void announce(void);
        void set_name(std::string& name);
        Zombie* zombieHorde( int N, std::string name );
        ~Zombie();
};