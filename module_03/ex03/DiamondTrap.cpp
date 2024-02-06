#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	name = "";
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hp;
	this->attackDamage = FragTrap::ad;
	this->energyPoints = ScavTrap::ep;
	std::cout << "DiamondTrap Default constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Default destructor called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name")
{
	name = name;
	ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hp;
	this->attackDamage = FragTrap::ad;
	this->energyPoints = ScavTrap::ep;
	std::cout << "DiamondTrap Name Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap ( const DiamondTrap& obj ) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = obj;
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& obj)
{
	std::cout << "DiamondTrap Assignment Overload called" << std::endl;
	ClapTrap::name = obj.name;
	this->name = obj.name;
	this->energyPoints = obj.energyPoints;
	this->attackDamage = obj.attackDamage;
	this->hitPoints = obj.hitPoints;
	return (*this);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "DiamondTrap hitpoints(100): " << DiamondTrap::hitPoints << std::endl;
	std::cout << "DiamondTrap energyPoints(50): " << DiamondTrap::energyPoints << std::endl;
	std::cout << "DiamondTrap attackDamage(30): " << DiamondTrap::attackDamage << std::endl;
	std::cout << "DiamondTrap name is: " << DiamondTrap::_name << std::endl;
	std::cout << "DiamondTrap ClapTrap name is: " << ClapTrap::name << std::endl;
}