#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	*this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
	for (int i = 0; i < 100; i++)
        this->ideas[i] = copy.ideas[i];
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

void	Brain::learnIdea(std::string idea)
{
	int i = 0;
	while (!ideas[i].empty())
		i++;
	if (i < 100)
		ideas[i] = idea;
	else
		std::cout << "the brain is full" << std::endl;
}

void	Brain::think(void) const
{
	int i = -1;
	if (ideas[0].empty())
	{
		std::cout << "the brain is empty" << std::endl;
		return ;
	}
	while (!ideas[++i].empty())
		std::cout << ideas[i] << std::endl;
}