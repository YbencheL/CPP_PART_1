#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:

        int                 fixed_num;
        static const int    fract_bits;
    
    public:

        Fixed();
        Fixed(const Fixed& fixednum);
        Fixed& operator=(const Fixed& f);
        int    getRawBits(void) const;
        void   setRawBits(int const raw);
        ~Fixed();

};

#endif