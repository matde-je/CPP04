#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>

//When a function is marked as virtual in the base class, a derived class can provide its own implementation of that function
//the appropriate version of the function is called based on the actual type of the object during runtime
//This is known as runtime polymorphism or late binding
//deconstructors have to be virtual to delete them properly later 
//deleting object of polymorphic class which has non-virtual destructor might cause undefined behavior

//const member function, means that when you call this function on a const object
//the function doesnt modify the state of the object
class Animal
{
	protected:
        std::string type;

	public:
		Animal(void);
		Animal(std::string name);
		virtual ~Animal(void);
		Animal &operator=(const Animal &copy);
		Animal(const Animal& copy);

		std::string getType() const;
		virtual void makeSound() const;
       
};

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(std::string name);
		virtual ~Cat(void);
		Cat &operator=(const Cat &copy);
		Cat(const Cat& copy);
		
		void makeSound() const;
};

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(std::string name);
		virtual ~Dog(void);
		Dog &operator=(const Dog &copy);
		Dog(const Dog& copy);

		void makeSound() const;
};


#endif