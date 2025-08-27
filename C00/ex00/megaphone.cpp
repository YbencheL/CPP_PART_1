#include <iostream>

int main(int ac, char *av[])
{
    if (ac >= 2)
    {
        for(int i = 1; i < ac ; i++)
        {
            std::string s = av[i];
            for (int j = 0; j < (int)s.size(); j++)
                s[j] = std::toupper(s[j]);
            std::cout << s;
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
}
