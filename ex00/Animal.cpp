#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = type;
    return ;
}

Animal::Animal(void): type("animal")
{
    std::cout << "Animal constructor called" << std::endl;
    return ;
}

Animal::~Animal(void)
{
    std::cout << "Animal destructor called" << std::endl;
    return ;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = copy.type;
    return ;
}

Animal &Animal::operator = (const Animal &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}






Cat::Cat(std::string type): Animal(type)
{
    std::cout << "Cat type constructor called" << std::endl;
    this->type = type;
    return ;
}

Cat::Cat(void): Animal("cat")
{
    std::cout << "Cat constructor called" << std::endl;
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    return ;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return (*this);
}






Dog::Dog(std::string type): Animal(type)
{
    std::cout << "Dog type constructor called" << std::endl;
    this->type = type;
    return ;
}

Dog::Dog(void): Animal("dog")
{
    std::cout << "Dog constructor called" << std::endl;
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    return ;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
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
