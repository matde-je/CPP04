#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>

//needs to come first
class Brain
{
	public:
        std::string ideas[100];
		Brain(void);
		Brain(std::string name);
		Brain(const Brain& origin);
		~Brain(void);
		Brain &operator = (const Brain &copy);
};

class Animal
{
	protected:
        std::string type;

	public:
		Animal(void);
		Animal(std::string name);
		virtual ~Animal(void);
		Animal &operator = (const Animal &copy);
		Animal(const Animal& origin);
};

class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat(void);
		Cat(const Cat& origin);
		virtual ~Cat(void);
		Cat &operator = (const Cat &copy);
		Brain& getBrain(void);
		Brain& setBrain(std::string idea);
};

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(const Dog& origin);
		virtual ~Dog(void);
		Dog &operator = (const Dog &copy);
		Brain& getBrain(void);
		Brain& setBrain(std::string idea);
};

#endif