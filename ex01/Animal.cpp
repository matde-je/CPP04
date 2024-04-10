#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = type;
}

Animal::Animal(void)
{
    std::cout << "Animal constructor called" << std::endl;
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
    std::cout << "Animal copy operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Cat::Cat(void): Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = "Cat ideas";
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain; //calls brain destructor
}

Cat::Cat(const Cat &copy): Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain)); //dereferencing
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat copy operator called" << std::endl;  
    *this->brain = *copy.brain;
	this->type = copy.type;
    return *this;
}

Dog::Dog(void): Animal("Dog"), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = "Dog ideas";
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain));
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog copy operator called" << std::endl;
    *this->brain = *copy.brain;
	this->type = copy.type;
    return *this;
}

Brain::Brain(std::string idea)
{
    std::cout << "Brain type constructor called" << std::endl;
    *this = idea;
}

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = copy;
}

Brain &Brain::operator=(const Brain &copy)
{
    std::cout << "Brain copy assignment operator called" << std::endl;
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = copy.ideas[i];
    return (*this);
}
