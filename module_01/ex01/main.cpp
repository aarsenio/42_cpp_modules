#include "Zombie.hpp"

int	main()
{
	Zombie *horde = zombieHorde(3, "Paul");

	delete[] horde;
}