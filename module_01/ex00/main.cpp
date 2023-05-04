#include "Zombie.hpp"

int	main()
{
	Zombie *zombie = newZombie("Foo");

	randomChump("Robert");
	zombie->announce();
	delete zombie;
}