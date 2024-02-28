#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->attackDamage = 20;
	this->energyPoints = 50;
	this->hitPoints = 100;
	this->gateKeeper = 0;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->attackDamage = 20;
	this->energyPoints = 50;
	this->hitPoints = 100;
	this->gateKeeper = 0;
}

ScavTrap::ScavTrap(const ScavTrap& obj): ClapTrap()
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& obj)
{
	this->attackDamage = obj.attackDamage;
	this->energyPoints = obj.energyPoints;
	this->hitPoints = obj.hitPoints;
	std::cout << "Scavtrap assignment overload called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor Called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoints < 1)
	{
		std::cout << "ScavTrap " << this->name << "is already dead" << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->name << " energy points is " << this->energyPoints << " and it can't act!" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	this->energyPoints--;
}

void	ScavTrap::guardGate(void)
{
	if (this->gateKeeper == 0) {
		std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
		this->gateKeeper = 1;
		return ;
	}
	else
		std::cout << "ScavTrap already is in Gate Keeper mode" << std::endl;
}