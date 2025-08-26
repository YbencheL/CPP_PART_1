#include "replace.hpp"

int main(int ac, char **av)
{
    std::string s1;
    std::string s2;
    std::string filename;
    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        if (s1.empty() || s2.empty())
        {
            std::cout << "your have entered an empty string" << std::endl;
            return 1;
        }
        if (replace(s1, s2, av[1]))
            return 1;
    }
    else
    {
        std::cerr << "ERROR : WRONG NUMBER OF ARGUMENTS" << std::endl;
        return 1;
    }
}