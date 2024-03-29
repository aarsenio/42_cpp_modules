#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const FragTrap& obj);
		FragTrap(std::string name);
		FragTrap& operator=(const FragTrap& obj);
		
		void	highFiveGuys(void);
};

#endif