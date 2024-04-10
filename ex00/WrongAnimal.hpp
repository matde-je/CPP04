#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>
#include <cstring>
#include <cstdlib>

//When a function is marked as virtual in the base class, a derived class can provide its own implementation of that function
//the appropriate version of the function is called based on the actual type of the object during runtime
//This is known as runtime polymorphism or late binding

//const member function, means that when you call this function on a const object
//the function doesnt modify the state of the object
class WrongAnimal
{
	protected:
        std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string name);
		WrongAnimal(const WrongAnimal &copy);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &copy);
		std::string getType() const;
		void makeSound() const;
       
};

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(std::string name);
		WrongCat(const WrongCat &copy);
		virtual ~WrongCat(void);
		WrongCat &operator=(const WrongCat &copy);
		void makeSound() const;
};

#endif