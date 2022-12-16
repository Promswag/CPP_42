#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook() {
	this->contactCount = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact() {
	if (++this->contactCount > 8)
		std::cout << "/!\\ PhoneBook is full, replacing oldest contact /!\\" << std::endl;
	contactArray[(contactCount - 1) % 8].updateInfo();
}

void PhoneBook::searchContact() const {
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "|" << std::setw(10) << std::left << "Index" << "|";
	std::cout << std::setw(10) << std::left<< "First name" << "|";
	std::cout << std::setw(10) << std::left<< "Last name" << "|";
	std::cout << std::setw(10) << std::left<< "Nickname" << "|" << std::endl;
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
	std::cout << std::setfill(' ');
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		std::cout << std::setw(10) << std::right << this->truncString(contactArray[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << this->truncString(contactArray[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << this->truncString(contactArray[i].getNickname()) << "|";
		std::cout << std::endl;
	}
	std::cout << std::setfill('-') << std::setw(45) << "" << std::endl;
	std::cout << std::setfill(' ');
	std::cout << "Which Contact(Index) info would you like to display?" << std::endl;
	this->searchContactByIndex();
}

void PhoneBook::searchContactByIndex(void) const {
	std::string			indexStr;
	int					index;
	std::stringstream	ss;

	while (indexStr.empty())
		getline(std::cin, indexStr);
	ss << indexStr;
	ss >> index;
	if (index == 0)
		return ;
	if (index < 1 || index > 8)
	{
		std::cout << "Invalid Index" << std::endl;
		return ;
	}
	if (this->contactArray[index -1].getFirstName().empty())
	{
		std::cout << "This entry is empty" << std::endl;
		return ;
	}
	this->contactArray[index - 1].displayInfo();
}

std::string PhoneBook::truncString(std::string str) const {
	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		str.append(".");
	}
	return str;
}
