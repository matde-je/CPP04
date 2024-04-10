#include "Animal.hpp"

//Animal *animals[2] declaring an array of four pointers to Animal
//not creating actual Animal objects yet. 
//The constructor is called when created instances of the class using the new keyword or by directly creating objects
//declaring an array of four pointers to Animal
//collection of pointers that point to different objects

int main()
{
    Animal *animals[2];
    animals[0] = new Dog();
    animals[1] = new Cat();

    delete animals[0];
    delete animals[1];

    std::cout << std::endl;
    Cat originalCat;
    std::cout << std::endl;
    Cat copiedCat(originalCat);
    std::cout << std::endl;

    Dog tmp;
    std::cout << std::endl;
    Dog basic = tmp;
    std::cout << std::endl;
}
