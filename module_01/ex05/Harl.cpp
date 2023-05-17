#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Called Harl default constructor" << std::endl;
	this->func[0].name = "DEBUG";
	this->func[0].action = &Harl::debug;
	this->func[1].name = "INFO";
	this->func[1].action = &Harl::info;
	this->func[2].name = "WARNING";
	this->func[2].action = &Harl::warning;
	this->func[3].name = "ERROR";
	this->func[3].action = &Harl::error;
}

Harl::~Harl(void)
{
	std::cout << "Called Harl default destructor" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	for (int i = 0; i < 4; i++)
	{
		if (level == this->func[i].name)
		{
			(this->*func[i].action)();
			return ;
		}
	}
	std::cout << "Enter a valid option" << std::endl;
}
