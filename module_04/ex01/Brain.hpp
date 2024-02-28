#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(const Brain& obj);
		Brain& operator=(const Brain& obj);
		~Brain(void);

};

#endif