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

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << " Animal copy operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

void Animal::makeSound() const
{
	std::cout << " animal is trying to make sound" << std::endl;
}

const std::string Animal::getType() const
{
    return (this->type);
}






Cat::Cat(void): Animal(), brain(new Brain())
{
    std::cout << "Cat constructor called" << std::endl;
    type = "cat";
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = "kitty kat kat";
    return ;
}

Cat::~Cat(void)
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain; //calls brain destructor
    return ;
}

Cat::Cat(const Cat &copy): Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain)); //dereferencing
    return ;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        std::cout << "Cat copy operator called" << std::endl;  
        delete brain;
        brain = new Brain(*(copy.brain));
        Animal::operator=(copy);
    }
    return *this;
}

Brain& Cat::getBrain(void)
{
    std::cout << "Cat brain: " << this->brain->ideas[0] << std::endl;
	return (*this->brain);
}

Brain& Cat::setBrain(std::string idea)
{
    std::cout << "Cat brain set to: " << idea << std::endl;
    this->brain->ideas[0] = idea;
	return (*this->brain);
}

void Cat::makeSound() const
{
    std::cout << "miauuuu" << std::endl;
}







Dog::Dog(void): Animal(), brain(new Brain())
{
    std::cout << "Dog constructor called" << std::endl;
    type = "dog";
    for(int i = 0; i < 100 ; i++)
        this->brain->ideas[i] = "doggy dog";
    return ;
}

Dog::~Dog(void)
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
    return ;
}

Dog::Dog(const Dog &copy): Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*(copy.brain));
    return ;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        std::cout << "Dog copy operator called" << std::endl;
        delete brain;
        brain = new Brain(*(copy.brain));
        Animal::operator=(copy);
    }
    return *this;
}

Brain& Dog::getBrain(void)
{
    std::cout << "Dog brain: " << this->brain->ideas[0] << std::endl;
	return (*this->brain);
}

Brain& Dog::setBrain(std::string idea)
{
    this->brain->ideas[0] = idea;
    std::cout << "Dog brain set to: " << this->brain->ideas[0] << std::endl;
	return (*this->brain);
}

void Dog::makeSound() const
{
    std::cout << "AOAO" << std::endl;
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
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; ++i)
    {
        this->ideas[i] = copy.ideas[i];
    }
    return ;
}

Brain &Brain::operator=(const Brain &copy)
{
    if (this != &copy)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        for (int i = 0; i < 100; ++i)
        {
            this->ideas[i] = copy.ideas[i];
        }
    }
    return (*this);
}


