#include "Animal.hpp"

//Animal *animals[4] declaring an array of four pointers to Animal
//not creating actual Animal objects yet. 
//The constructor is called when you create instances of the class using the new keyword or by directly creating objects
//declaring an array of four pointers to Animal
//collection of pointers that point to different objects

int main()
{
    Animal *animals[4];
    animals[0] = new Dog();
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Cat();

    delete animals[0];
    delete animals[1];
    delete animals[2];
    delete animals[3];
    return 0;
}

//destruction follows the reverse order of construction

//The type of object being deleted determines which destructor is called
//in polymorphism, the correct derived class destructor is called for each object

// Animal type constructor called
// Brain constructor called
// Dog constructor called

// Animal type constructor called
// Brain constructor called
// Dog constructor called

// Animal type constructor called
// Brain constructor called
// Cat constructor called

// Animal type constructor called
// Brain constructor called
// Cat constructor called


// Dog destructor called
// Brain destructor called
// Animal destructor called

// Dog destructor called
// Brain destructor called
// Animal destructor called

// Cat destructor called
// Brain destructor called
// Animal destructor called

// Cat destructor called
// Brain destructor called
// Animal destructor called