#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

//When a function is marked as virtual in the base class, a derived class can provide its own implementation of that function
//the appropriate version of the function is called based on the actual type of the object during runtime
//This is known as runtime polymorphism or late binding
class Animal
{
	protected:
        std::string type;

	public:
		Animal(void);
		Animal(std::string name);
		virtual ~Animal(void);

		std::string getType() const;
		virtual void makeSound() const;
       
};

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		virtual ~Cat(void);
		
		void makeSound() const;
};

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		virtual ~Dog(void);

		void makeSound() const;
};


#endif