#ifndef Animal_HPP
# define Animal_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(const Animal& obj);
		Animal& operator=(const Animal& obj);
		virtual ~Animal(void);

		std::string	getType(void) const;
        virtual void    makeSound(void) const;
};

#endif