#include "replace.hpp"

int main(int ac, char **av)
{
    std::string line;
    std::string s1;
    std::string s2;
    size_t pos;
    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        std::ifstream infile(av[1]);
        if (!infile)
        {
            std::cerr << "ERROR OPENING FILE" << std::endl;
            return 1;
        }
        std::string filename = std::string(av[1]) + ".replaced";
        std::ofstream outfile(filename.c_str());
        if (!outfile)
        {
            std::cerr << "ERROR CLOSING FILE" << std::endl;
            return 1;
        }
        while (std::getline(infile, line))
        {
            pos = 0;
            while (line.find(s1, pos) != std::string::npos)
            {
                pos = line.find(s1, pos);
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
            outfile << line << '\n';
        }
    
        infile.close();
        outfile.close();
    }
    else
    {
        std::cerr << "ERROR : WRONG NUMBER OF ARGUMENTS" << std::endl;
        return 1;
    }
}