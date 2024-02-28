#include "Cat.hpp"

Cat::Cat(void)
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat& obj): Animal()
{
    std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "Cat assignement overload called" << std::endl;
    this->type = obj.type;
    return *this;
}

Cat::~Cat(void)
{
    std::cout << "Cat default destructor called" << std::endl;
    delete brain;
}

void    Cat::makeSound(void) const
{
    std::cout << "MIAU" << std::endl;
}