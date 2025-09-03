#include "Fixed.hpp"

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

bool            Fixed::operator>(const Fixed& obj)  const
{
    return this->fixed_num > obj.getRawBits();
}

bool            Fixed::operator<(const Fixed& obj)  const
{
    return this->fixed_num < obj.getRawBits();
}

bool            Fixed::operator>=(const Fixed& obj) const
{
    return this->fixed_num >= obj.getRawBits();
}

bool            Fixed::operator<=(const Fixed& obj) const
{
    return this->fixed_num <= obj.getRawBits();
}

bool            Fixed::operator==(const Fixed& obj) const
{
    return this->fixed_num == obj.getRawBits();
}

bool            Fixed::operator!=(const Fixed& obj) const
{
    return this->fixed_num != obj.getRawBits();
}

Fixed          Fixed::operator+(const Fixed& obj)   const
{
    return Fixed(this->toFloat() + obj.toFloat());
}

Fixed          Fixed::operator*(const Fixed& obj)   const
{
    return Fixed(this->toFloat() * obj.toFloat());
}

Fixed          Fixed::operator-(const Fixed& obj)   const
{
    return Fixed(this->toFloat() - obj.toFloat());
}

Fixed          Fixed::operator/(const Fixed& obj)   const
{
    return Fixed(this->toFloat() / obj.toFloat());
}

Fixed          Fixed::operator++(int)
{
    Fixed temp = *this;
    fixed_num += 1;
    return temp;
}

Fixed          Fixed::operator++()
{
    fixed_num += 1;
    return *this;
}

Fixed          Fixed::operator--(int)
{
    Fixed temp = *this;
    fixed_num -= 1;
    return temp;
}

Fixed          Fixed::operator--()
{
    fixed_num -= 1;
    return *this;
}
