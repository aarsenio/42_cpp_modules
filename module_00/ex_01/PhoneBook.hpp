#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <cstdlib>

struct data {
    std::string value;
};

class PhoneBook
{
    private:
        Contact contact[8];
		struct data data[5];
        int	i;
        void setElement(std::string element, int i);
        void setContact(void);
        void printParameter(std::string str);
        void printTableContent(int index);
        void printTableHeader(void);

    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void ADD();
		void SEARCH();
};


#endif