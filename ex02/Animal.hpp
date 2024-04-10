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
		Brain(std::string idea);
		Brain(const Brain& origin);
		~Brain(void);
		Brain &operator=(const Brain &copy);
};

class Animal
{
	protected:
        std::string type;

	public:
		Animal(void);
		Animal(std::string name);
		Animal(const Animal& origin);

		virtual ~Animal(void);
		Animal &operator=(const Animal &copy);
		virtual void makeSound() const = 0;
		const std::string getType() const;
};


class Cat: public Animal
{
	private:
		Brain *brain;

	public:
		Cat(void);
		Cat(const Cat& origin);
		virtual ~Cat(void);
		Cat &operator=(const Cat &copy);
		virtual void makeSound() const;
};

class Dog: public Animal
{
	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(const Dog& origin);
		virtual ~Dog(void);
		Dog &operator=(const Dog &copy);
		virtual void makeSound() const;
};

#endif