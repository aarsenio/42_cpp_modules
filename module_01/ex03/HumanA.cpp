#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
}

HumanA::~HumanA()
{
	std::cout << "Called default destructor of Human A" << std::endl;
}

void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
