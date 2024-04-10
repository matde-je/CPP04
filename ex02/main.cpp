#include "Animal.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    // Animal test;

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
}
