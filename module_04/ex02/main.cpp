#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal a;
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		i->makeSound();
		j->makeSound();
		delete j;//should not create a leak
		delete i;

		std::cout << "\nTEST 1 DONE\n" << std::endl;
	}
	return 0;
}