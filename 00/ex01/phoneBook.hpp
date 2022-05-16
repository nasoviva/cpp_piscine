#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include "contact.hpp"

class PhoneBook
{

private:

    Contact listOfContacts[8];

    void PrintBook(int id)
    {
        int i;

        i = 0;
        std::cout << "\n " << std::setfill ('-') << std::setw (44) << "\n";
        std::cout << "|" << std::setfill (' ') << std::setw (11) << "index|";
        std::cout << std::setfill (' ') << std::setw (11) << "firstName|";
        std::cout << std::setfill (' ') << std::setw (11) << "lastName|";
        std::cout << std::setfill (' ') << std::setw (11) << " nicName|";
        std::cout << "\n " << std::setfill ('-') << std::setw (44) << "\n";        
        while (i < id)
        {
            std::cout << "|" << std::setfill (' ') << std::setw (10) << i + 1 << "|";
            if (listOfContacts[i].GetFirstName().length() > 9)
                std::cout << listOfContacts[i].GetFirstName().substr(0,9).append(".") << "|";
            else
                std::cout << std::setfill (' ') << std::setw (10) << listOfContacts[i].GetFirstName() << "|";
            if (listOfContacts[i].GetLastName().length() > 9)
                std::cout << listOfContacts[i].GetLastName().substr(0,9).append(".") << "|";
            else
                std::cout << std::setfill (' ') << std::setw (10) << listOfContacts[i].GetLastName() << "|";
            if (listOfContacts[i].GetNicName().length() > 9)
                std::cout << listOfContacts[i].GetNicName().substr(0,9).append(".") << "|";
            else
                std::cout << std::setfill (' ') << std::setw (10) << listOfContacts[i].GetNicName() << "|";
            std::cout << "\n " << std::setfill ('-') << std::setw (44) << "\n" << std::endl;
            i++;
        }
    }

public:
    
    PhoneBook(){};
    ~PhoneBook(){};

    void Add (int number);
    void Search(int id);
    void Error();
    void Exit();
};

#endif
