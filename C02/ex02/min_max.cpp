#include "Fixed.hpp"

Fixed&        Fixed::min(Fixed& a, Fixed& b)
{
    if (a > b)
        return b;
    else
        return a;
}

Fixed&        Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed&        Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return b;
    else
        return a;
}

const Fixed&        Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}
