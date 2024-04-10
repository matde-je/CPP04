#include "WrongAnimal.hpp"

//the WrongCat should output the WrongAnimal sound
WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal type constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::WrongAnimal(void)
{
    std::cout << "WrongAnimal constructor called" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "WA copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
    std::cout << "WrongCat type constructor called" << std::endl;
}

WrongCat::WrongCat(void): WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy): WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    std::cout << "WC copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
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
    std::cout << "WrongCat sounds" << std::endl;
}
