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

    std::cout << "\n" << std::endl;
    Cat originalCat;
    originalCat.getBrain();
    Cat copiedCat(originalCat);
    std::cout << "copied cat:" << std::endl;
    copiedCat.getBrain();
    std::cout << "original cat:" << std::endl;
    originalCat.setBrain("Persia");
    std::cout << "copied cat:" << std::endl;
    copiedCat.getBrain();

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



//pt2

// Animal type constructor called
// Brain constructor called
// Cat constructor called


// Cat brain: kitty kat kat

// Animal copy constructor called
// Cat copy constructor called
// Brain copy constructor called

// copied cat:
// Cat brain: kitty kat kat
// original cat:
// Cat brain set to: Persia
// copied cat:
// Cat brain: kitty kat kat therefore didnt change, solid copy


// Cat destructor called
// Brain destructor called
// Animal destructor called
// Cat destructor called
// Brain destructor called
// Animal destructor called