#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie();
		~Zombie(void);
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde(int n, std::string name);

#endif