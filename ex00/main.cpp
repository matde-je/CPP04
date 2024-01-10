#include "Animal.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;
    return 0;
}

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