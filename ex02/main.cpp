#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;

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

// Animal constructor called
// Brain constructor called
// Dog constructor called

// Animal constructor called
// Brain constructor called
// Cat constructor called

// dog 
// cat 
// miauuuu
// AOAO

// Dog destructor called
// Brain destructor called
// Animal destructor called
// Cat destructor called
// Brain destructor called
// Animal destructor called


// Animal constructor called
// Brain constructor called
// Cat constructor called

// Cat brain: kitty kat kat

// Animal constructor called
// Cat copy constructor called
// Brain copy constructor called

// copied cat:
// Cat brain: kitty kat kat

// original cat:
// Cat brain set to: Persia
// copied cat:
// Cat brain: kitty kat kat


// Cat destructor called
// Brain destructor called
// Animal destructor called
// Cat destructor called
// Brain destructor called
// Animal destructor called