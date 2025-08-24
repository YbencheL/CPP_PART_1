#include "Harl.hpp"


int main()
{
    Harl c;

    c.complain("DEBUG");
    std::cout << std::endl;
    c.complain("INFO");
    std::cout << std::endl;
    c.complain("WARNING");
    std::cout << std::endl;
    c.complain("ERROR");
}