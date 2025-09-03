#include "Fixed.hpp"

const int Fixed::fract_bits = 8;

Fixed::Fixed() : fixed_num(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int in)
{
    fixed_num = in * std::pow(2, fract_bits);
    std::cout << "int constructor called" << std::endl;
}

Fixed::Fixed(const float fl)
{
    fixed_num = roundf(fl * std::pow(2, fract_bits));
    std::cout << "float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj) : fixed_num(obj.fixed_num)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& obj)
{
    if (this != &obj)
    {
        fixed_num = obj.fixed_num;
    }
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& ob)
{
    os << ob.toFloat();
    return os;
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

float Fixed::toFloat(void) const
{
    return fixed_num / (std::pow(2, fract_bits));
}

int Fixed::toInt(void) const
{
    return fixed_num / std::pow(2, fract_bits);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}