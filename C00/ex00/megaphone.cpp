#include <iostream>
#include <algorithm>

int main(int ac, char *av[])
{
    if (ac >= 2)
    {
        for(int i = 1; i < ac; i++)
        {
            std::string s = (std::string)av[i];
            std::transform(s.begin(), s.end(), s.begin(), ::toupper);
            std::cout << s;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
