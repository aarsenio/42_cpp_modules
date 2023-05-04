#include "PhoneBook.hpp"

int main(void)
{
    system("clear");
    std::string input = "";
    PhoneBook phoneBook;

    while (1)
    {
        std::cout << "Enter add, search or exit\n";
        getline(std::cin >> std::ws, input);
        if (std::cin.eof())
            return (1);
        if (input == "add")
            phoneBook.ADD();
        else if (input == "search")
            phoneBook.SEARCH();
        else if (input == "exit")
            return (0);
        else
            std::cout << "Invalid option" << std::endl;
        input = "";
        std::cin.clear();
    }
}
