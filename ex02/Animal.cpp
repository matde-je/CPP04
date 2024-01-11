#include "Animal.hpp"

Animal::Animal(std::string type)
{
    std::cout << "Animal type constructor called" << std::endl;
    this->type = type;
    return ;
}

Animal::Animal(void)
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





//copy the contents of the origin object, which includes the Brain object
Cat::Cat(std::string type): Animal(type), brain(new Brain())
{
    std::cout << "Cat type constructor called" << std::endl;
    *this = type;
    return ;
}

Cat::Cat(void): Animal("cat"), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    for(int i = 0; i < 100 ; i++)
    {
        this->brain->ideas[i] = "kitty kat kat";
    }
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain; // calls brain destructor
    return ;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain));
    return ;
}

Cat &Cat::operator = (const Cat &copy)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}






Dog::Dog(std::string type): Animal(type), brain(new Brain())
{
    std::cout << "Dog type constructor called" << std::endl;
    *this = type;
    return ;
}

Dog::Dog(void): Animal("dog"), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    for(int i = 0; i < 100 ; i++)
    {
        this->brain->ideas[i] = "doggy dog";
    }
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    return ;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain));
    return ;
}

Dog &Dog::operator = (const Dog &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}





Brain::Brain(std::string idea)
{
    std::cout << "Brain type constructor called" << std::endl;
    *this = idea;
    return ;
}

Brain::Brain(void)
{
    std::cout << "Brain constructor called" << std::endl;
    return ;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called" << std::endl;
    return ;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
    return ;
}

Brain &Brain::operator = (const Brain &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    *this = copy;
    return (*this);
}


