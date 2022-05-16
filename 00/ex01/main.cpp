#include "phoneBook.hpp"

int	main()
{
    PhoneBook phoneBook;
    std::string input;
    int id;

    id = 0;
    std::cout << "\nThe Phone Book is empty. It can store a maximum of 8 contacts\n" << std::endl;
    while (input != "EXIT")
    {
        std::cout << "\nEnter one of three commands. The program only accepts ADD, SEARCH and EXIT\n" << std::endl;
        std::getline(std::cin >> std::ws, input);
        if (std::cin.eof())
            break;
        else if (input == "ADD")
        {
            phoneBook.Add(id);
            if (std::cin.eof())
                break;
            id++;
            if (id == 8)
                id = 0;
        }
        else if (input == "SEARCH")
        {
            phoneBook.Search(id);
            if (std::cin.eof())
                break;
        }       
        else if (input == "EXIT")
            phoneBook.Exit();
        else
            phoneBook.Error();
    }
    return (0);
}
