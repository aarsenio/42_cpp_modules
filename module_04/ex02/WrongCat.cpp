#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& obj): WrongAnimal()
{
    std::cout << "WrongCat copy constructor called" << std::endl;
	*this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj)
{
    std::cout << "WrongCat assignement overload called" << std::endl;
    this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat default destructor called" << std::endl;
}

void    WrongCat::makeSound(void) const
{
    std::cout << "MIAU" << std::endl;
}