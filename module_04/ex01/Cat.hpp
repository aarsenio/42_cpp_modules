#ifndef Cat_HPP
# define Cat_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain	*brain;

	public:
		Cat(void);
		Cat(const Cat& obj);
		Cat& operator=(const Cat& obj);
		~Cat(void);

        void    makeSound(void) const;
		void	learn(std::string idea);
		void	think(void) const;
};

#endif