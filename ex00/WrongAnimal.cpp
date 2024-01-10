#include "WrongAnimal.hpp"

//the WrongCat should output the WrongAnimal sound
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    this->type = type;
    return ;
}

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    std::cout << "WrongCat type constructor called" << std::endl;
    this->type = type;
    return ;
}

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
    return ;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}


std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sounds" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "wronganimalsound" << std::endl;
}


