#include "ScavTrap.hpp"

int main (void)
{
	ClapTrap a("Henrique");
	a.attack("Marcos");
	a.attack("Joao");

	ScavTrap b("Gabriel");
	ScavTrap c(b);
	b.attack ("Henrique");
	b.beRepaired(30);
	b.guardGate();
	b.guardGate();
}