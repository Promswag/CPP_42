#include "PhoneBook.hpp"

int	main()
{
	std::string	choice;
	PhoneBook phonebook;

	while (1)
	{
		choice = "";
		std::cout << "Accepted Inputs : ADD, SEARCH, EXIT" << std::endl;
		while (choice.empty())
			getline(std::cin, choice);
		if (choice == "ADD")
			phonebook.addContact();
		else if (choice == "SEARCH")
			phonebook.searchContact();
		else if (choice == "EXIT")
			break;
		else
			std::cout << "Typing is hard." << std::endl;
	}
}