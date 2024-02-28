#include "Dog.hpp"

Dog::Dog(void)
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& obj): Animal()
{
    std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog assignement overload called" << std::endl;
    this->type = obj.type;
    return *this;
}

Dog::~Dog(void)
{
    std::cout << "Dog default destructor called" << std::endl;
    delete brain;
}

void    Dog::makeSound(void) const
{
    std::cout << "WOFFFF" << std::endl;
}