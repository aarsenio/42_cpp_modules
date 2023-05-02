#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    this->i = 0;
    std::cout << "Called PhoneBook default constructor" << std::endl;
}

PhoneBook::~PhoneBook(void)
{
    std::cout << "Called PhoneBook default destructor" << std::endl;
}

void	PhoneBook::setElement(std::string element, int i)
{
	std::cout << element << std::endl;
	getline(std::cin, this->data[i].value);
	if (std::cin.eof())
        return ;
}

void PhoneBook::setContact(void)
{
	this->contact[this->i].setFirstName(this->data[0].value);
    this->contact[this->i].setLastName(this->data[1].value);
    this->contact[this->i].setNickname(this->data[2].value);
    this->contact[this->i].setPhoneNumber(this->data[3].value);
    this->contact[this->i].setDarkestSecret(this->data[4].value);
}

void	PhoneBook::ADD(void)
{
	system("clear");
	this->setElement("Enter the first name: ", 0);
    this->setElement("Enter the last yame: ", 1);
    this->setElement("Enter the nickname: ", 2);
    this->setElement("Enter the phone number: ", 3);
    this->setElement("Enter the darkest secret: ", 4);
	for (int i = 0; i < 5; i++)	{
		if (this->data[i].value.empty()) {
			std::cout << "Invalid Input" << std::endl;
			return ;
		}
	}
	this->setContact();
	if (this->i == 8)
		this->i = 0;
	else
		this->i++;
}

void	PhoneBook::SEARCH(void)
{
	int	option;

	system("clear");
	if (this->contact[0].getFirstName().empty()) {
		std::cout << "Empty PhoneBook" << std::endl;
		return ;
	}
	std::cout << "Enter an index of your choice" << std::endl;
    std::cin >> option;
	if (option < 0 || option > 7) {
		std::cout << "Option is out of range" << std::endl;
		return ;
	}
	if (this->contact[option].getFirstName().empty()) {
		std::cout << "Contact doesnt exit" << std::endl;
		return ;
	}
	std::cout << this->contact[option].getFirstName() << std::endl;
	std::cout << this->contact[option].getLastName() << std::endl;
	std::cout << this->contact[option].getNickname() << std::endl;
	std::cout << this->contact[option].getPhoneNumber() << std::endl;
	std::cout << this->contact[option].getDarkestSecret() << std::endl;
}
