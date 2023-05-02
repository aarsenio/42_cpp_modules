#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

class Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        Contact();
        ~Contact();
        void setFirstName(std::string newName);
        std::string getFirstName(void);
        void setLastName(std::string newLastName);
        std::string getLastName(void);
        void setNickname(std::string newNickname);
        std::string getNickname(void);
        void setPhoneNumber(std::string newPhoneNumber);
        std::string getPhoneNumber(void);
        void setDarkestSecret(std::string newDarkestSecret);
        std::string getDarkestSecret(void);
};

#endif