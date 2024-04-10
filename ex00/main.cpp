#include "Animal.hpp"
#include "WrongAnimal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    const WrongAnimal* meta1 = new WrongAnimal();
    const WrongAnimal* i1 = new WrongCat();

    std::cout << i1->getType() << std::endl;

    i1->makeSound();
    meta1->makeSound();

    delete i1;
    delete meta1;
}

//in virtual destructors the derived class will destruct first and then the other

// Animal constructor called
// Animal type constructor called
// Dog constructor called
// Animal type constructor called
// Cat constructor called

// dog 
// cat 
// miauuuu
// AOAO
// Animal sounds

// Animal destructor called
// Dog destructor called
// Animal destructor called
// Cat destructor called
// Animal destructor called


// WrongAnimal constructor called
// WrongAnimal type constructor called
// WrongCat constructor called

// WrongCat 
// wronganimalsound
// WrongAnimal sounds

// WrongCat destructor called
// WrongAnimal destructor called
// WrongAnimal destructor called