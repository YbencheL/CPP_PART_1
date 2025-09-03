#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <ostream>

class Fixed
{
    private:

        int                 fixed_num;
        static const int    fract_bits;

    public:

        Fixed();
        Fixed(const int in);
        Fixed(const float fl);
        Fixed(const Fixed& obj);
        Fixed&  operator=(const Fixed& obj);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;
        ~Fixed();

};

std::ostream&    operator<<(std::ostream& os, const Fixed& ob);

#endif