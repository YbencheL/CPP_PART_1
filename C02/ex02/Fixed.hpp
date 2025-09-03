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
        Fixed&               operator=(const Fixed& obj);
        bool                 operator>(const Fixed& obj) const;
        bool                 operator<(const Fixed& obj) const;
        bool                 operator>=(const Fixed& obj) const;
        bool                 operator<=(const Fixed& obj) const;
        bool                 operator==(const Fixed& obj) const;
        bool                 operator!=(const Fixed& obj) const;
        Fixed                operator+(const Fixed& obj) const;
        Fixed                operator*(const Fixed& obj) const;
        Fixed                operator-(const Fixed& obj) const;
        Fixed                operator/(const Fixed& obj) const;
        Fixed                operator++(int);
        Fixed                operator++();
        Fixed                operator--(int);
        Fixed                operator--();
        int                  getRawBits(void) const;
        void                 setRawBits(int const raw);
        float                toFloat( void ) const;
        int                  toInt( void ) const;
        static Fixed&        min(Fixed& a, Fixed& b);
        static const Fixed&  min(const Fixed& a, const Fixed& b);
        static Fixed&        max(Fixed& a, Fixed& b);
        static const Fixed&  max(const Fixed& a, const Fixed& b);
        ~Fixed();
    
};

std::ostream&    operator<<(std::ostream& os, const Fixed& ob);

#endif