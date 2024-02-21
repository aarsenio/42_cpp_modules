#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* h = new Cat();
    const WrongAnimal* i = new WrongCat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << h->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    j->makeSound();
    h->makeSound(); //will output the cat sound!
    i->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;
    delete h;
    return 0;
}
