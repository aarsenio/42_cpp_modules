#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>

class ClapTrap
{
	protected:
		int 		hitPoints;
		int			energyPoints;
		int			attackDamage;
		std::string	name; 

	public:
		ClapTrap(void);
		ClapTrap (const ClapTrap& obj);
		ClapTrap& operator=(const ClapTrap& obj);
		~ClapTrap(void);
		ClapTrap (std::string name);

		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		static const int ep = 50;
};

#endif