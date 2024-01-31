#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = "";
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
	this->name = name;
	this->attackDamage = 0;
	this->energyPoints = 10;
	this->hitPoints = 10;
}

ClapTrap::ClapTrap (const ClapTrap& obj)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
	std::cout << "ClapTrap Assignment overload called" << std::endl;
	this->name = obj.name;
	this->attackDamage = obj.attackDamage;
	this->energyPoints = obj.energyPoints;
	this->hitPoints = obj.hitPoints;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << "is already dead" << std::endl;
		return ;
	}
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " energy points is " << this->energyPoints << " and it can't act!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
	takeDamage(this->attackDamage);
	this->energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoints - amount > 0)
	{
		std::cout << this->name << " took " << amount << " of damage!" << std::endl;
		this->hitPoints -= amount;
	}
	else
		std::cout << "ClapTrap " << this->name << "is already dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << " energy points is " << this->energyPoints << " and it can't act!" << std::endl;
		return ;
	}
	if (this->hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->name << "is already dead" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " just healed " << amount << std::endl;
	this->hitPoints+= amount;
	this->energyPoints--;
}