#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap constructor Called" << std::endl;
}
 
FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << name << " constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj) : ClapTrap() 
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap& obj) 
{ 
	std::cout << "FragTrap assignemnt overload called" << std::endl;
	this->name = obj.name;
	this->hitPoints = obj.hitPoints;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	return (*this);
}

void	FragTrap::highFiveGuys( void )
{
	std::cout << "FragTrap " << this->name << "raised his hands to high five his friends" << std::endl;
}