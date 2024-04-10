#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = "Animal";
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Cat::Cat(std::string type): Animal(type)
{
    std::cout << "Cat type constructor called" << std::endl;
}

Cat::Cat(void): Animal("Cat")
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog type constructor called" << std::endl;
}

Dog::Dog(void): Animal("Dog")
{
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Animal sounds" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "miauuuu" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "AOAO" << std::endl;
}
