#include "PhoneBook.hpp"

int main(void)
{
    system("clear");
    std::string input = "";
    PhoneBook phoneBook;

    while (!std::cin.eof())
    {
        std::cout << "Enter add, search or exit\n";
        getline(std::cin, input);
        if (std::cin.eof())
            return (1);
        for (int i = 0; input[i] != '\0'; i++) {
            input[i] = (char)tolower(input[i]);
        }
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
