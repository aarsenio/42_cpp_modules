#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor" << std::endl;
    this->type = "";
}

Animal::Animal (const Animal& obj)
{
    std::cout << "Animal copy constructor called" << std::endl;
	*this = obj;
}

Animal& Animal::operator=(const Animal& obj)
{
    this->type = obj.type;
	std::cout << "Animal assignment overload called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{

}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void)
{
	std::cout << "No sound" << std::endl;
}