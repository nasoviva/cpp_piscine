#include "phoneBook.hpp"

void PhoneBook::Add(int number)
{
    std::string input;

    std::cout << "\nAdd first name: ";
    std::getline(std::cin >> std::ws, input);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    listOfContacts[number].SetFirstName(input);
    std::cout << "Add last name: ";
    std::getline(std::cin >> std::ws, input);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    listOfContacts[number].SetLastName(input);
    std::cout << "Add nicname: ";
    std::getline(std::cin >> std::ws, input);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    listOfContacts[number].SetNicName(input);
    std::cout << "Add phone number: ";
    std::getline(std::cin >> std::ws, input);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    listOfContacts[number].SetPhoneNumber(input);
    std::cout << "Add darkest secret: ";
    std::getline(std::cin >> std::ws, input);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    listOfContacts[number].SetDarkestSecret(input);        
    if (number == 7)
    {
        std::cout << "\n(!) If you try to add a 9th contact,replace the oldest one by the new one" << std::endl;
        std::cout << std::endl;
    }
}

void PhoneBook::Search(int id)
{
    std::string num;
    int number;

    PrintBook(id);
    std::cout << "\nEnter id number of contact from 1 to 8 for more details\n" << std::endl;
    std::getline(std::cin >> std::ws, num);
    if (std::cin.eof())
    {
        std::cout << std::endl;
        return;
    }
    if (num[0] > '0' && num[0] < '9' && num.length() == 1)
    {
        number = (num[0] - 48) - 1;
        std::cout << "\nFirst Name: " << listOfContacts[number].GetFirstName() << std::endl;
        std::cout << "Last Name: " << listOfContacts[number].GetLastName() << std::endl;
        std::cout << "Nicname: " << listOfContacts[number].GetNicName() << std::endl;
        std::cout << "Phone number: " << listOfContacts[number].GetPhoneNumber() << std::endl;
        std::cout << "Darkest secret: " << listOfContacts[number].GetDarkestSecret() << std::endl;
    }
    else
        std::cout << "\n(!)Error. You can search id from 1 to 8" << std::endl;   
}

void PhoneBook::Error()
{
    std::cout << "\n(!)Error\n";
}

void PhoneBook::Exit()
{
    std::cout << "\nGoodbye!\n\n";
}