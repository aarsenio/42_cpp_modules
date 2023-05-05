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
	getline(std::cin, this->value[i]);
	if (std::cin.eof())
        return ;
}

void PhoneBook::setContact(void)
{
	this->contact[this->i].setFirstName(this->value[0]);
    this->contact[this->i].setLastName(this->value[1]);
    this->contact[this->i].setNickname(this->value[2]);
    this->contact[this->i].setPhoneNumber(this->value[3]);
    this->contact[this->i].setDarkestSecret(this->value[4]);
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
		if (this->value[i].empty()) {
			std::cout << "Invalid Input" << std::endl;
			return ;
		}
	}
	this->setContact();
	if (this->i == 7)
		this->i = 0;
	else
		this->i++;
	system("clear");
}

void PhoneBook::printParameter(std::string str)
{
	if (str.length() <= 10) {
		std::cout << std::setw(10) << str;
		return ;
	}
	std::cout << str.substr(0, 9);
	std::cout << ".";
	return ;
}

void PhoneBook::printTableContent(int index)
{
	std::cout << "|         ";
	std::cout << index;
	std::cout << '|';
	printParameter(this->contact[index].getFirstName());
	std::cout << '|';
	printParameter(this->contact[index].getLastName());
	std::cout << '|';
	printParameter(this->contact[index].getNickname());
	std::cout << '|' << std::endl;
}

void PhoneBook::printTableHeader(void)
{
	std::cout << "|     index|First Name| Last Name|  Nickname|" << '\n';
	std::cout << "|----------|----------|----------|----------|" << '\n';
	for(int i = 0; i < 8; i++) {
		if (this->contact[i].getFirstName().empty())
			return ;
		printTableContent(i);
		std::cout << "|----------|----------|----------|----------|" << '\n';
	}
}

void	PhoneBook::SEARCH(void)
{
	int	option;

	system("clear");
	if (this->contact[0].getFirstName().empty()) {
		std::cout << "Empty PhoneBook" << std::endl;
		return ;
	}
	printTableHeader();
	std::cout << "Enter an index of your choice" << std::endl;
    std::cin >> option;
	if (std::cin.fail()) {
        std::cout << "The string enter must be a number" << std::endl;
        return ;
    }
	if (option < 0 || option > 7) {
		std::cout << "Option is out of range" << std::endl;
		return ;
	}
	if (this->contact[option].getFirstName().empty()) {
		std::cout << "Contact doesnt exist" << std::endl;
		return ;
	}
	std::cout << this->contact[option].getFirstName() << std::endl;
	std::cout << this->contact[option].getLastName() << std::endl;
	std::cout << this->contact[option].getNickname() << std::endl;
	std::cout << this->contact[option].getPhoneNumber() << std::endl;
	std::cout << this->contact[option].getDarkestSecret() << std::endl;
}
