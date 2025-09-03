#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed() : fixed_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixednum) : fixed_num(fixednum.fixed_num)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& f)
{
    if (this != &f)
    {
        fixed_num = f.fixed_num;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixed_num;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    fixed_num = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}