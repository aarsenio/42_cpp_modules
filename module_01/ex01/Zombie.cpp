#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Called default constructor" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " was destroyed" << std::endl;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
