#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    std::cout << "===== Polymorphism Test =====" << std::endl;
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << std::endl;
    std::cout << cat->getType() << std::endl;

    cat->makeSound();
    dog->makeSound(); 

    delete dog;
    delete cat;

    std::cout << "\n===== WrongAnimal Test =====" << std::endl << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << wrongCat->getType() << std::endl;
    wrongCat->makeSound(); 
    wrongMeta->makeSound();

    delete wrongMeta;
    delete wrongCat;

    std::cout << "\n===== Array of Animals =====" << std::endl << std::endl;
    Animal* animals[4];
    for (int i = 0; i < 2; ++i)
        animals[i] = new Dog();
    for (int i = 2; i < 4; ++i)
        animals[i] = new Cat();

    for (int i = 0; i < 4; ++i)
        animals[i]->makeSound();

    for (int i = 0; i < 4; ++i)
        delete animals[i];

    std::cout << "\n===== Deep Copy Test =====" << std::endl << std::endl;
    Dog d1;
    Dog d2;
    Dog d3(d2);
    d2 = d1;
    
    // std::cout << "\n===== Abstract class test =====" << std::endl << std::endl;
    // const Animal* meta = new Animal();
    // meta->makeSound();
    // delete meta;

    std::cout << "\n===== Destructors =====" << std::endl << std::endl;
    return 0;
}
