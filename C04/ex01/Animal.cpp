#include "Animal.hpp"

Animal::Animal() : type("anima")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& obj)
{
    type = obj.type;
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& obj)
{
    if (this != &obj)
        type = obj.type;
    std::cout << "Animal copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return type;
}

void Animal::makeSound() const
{
    std::cout << "WHAT SOUND SHOULD I MAKE???" << std::endl;
}