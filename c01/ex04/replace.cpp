#include "replace.hpp"

int replace(std::string s1, std::string s2, char* file_name)
{
    std::ifstream infile(file_name);
    std::string line;
    size_t pos;
    if (!infile)
    {
        std::cerr << "ERROR OPENING FILE OR FILE DOES NOT EXIST" << std::endl;
        return 1;
    }
    if (infile.peek() == std::ifstream::traits_type::eof())
    {
        std::cerr << "FILE IS EMPTY" << std::endl;
        return 1;
    }
    std::string filename = std::string(file_name) + ".replaced";
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
    return 0;
}