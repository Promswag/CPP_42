#include "Contact.hpp"

Contact::Contact() {
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact() {}

void Contact::displayInfo() const {
	std::cout << std::left;
	std::cout << std::setw(16) << "First name: " << this->firstName << std::endl;
	std::cout << std::setw(16) << "Last name: " << this->lastName << std::endl;
	std::cout << std::setw(16) << "Nickname: " << this->nickname << std::endl;
	std::cout << std::setw(16) << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << std::setw(16) << "Darkest Secret: " << this->darkestSecret << std::endl;
}

void Contact::updateInfo() {
	std::string	value[5];
	std::string	field[5] = {"First name: ", "Last Name: ", "Nickname: ", "Phone number: ", "Darkest Secret: "};
	
	for (int i = 0; i < 5; i++)
	{
		while(value[i].empty())
		{
			std::cout << field[i];
			getline(std::cin, value[i]);
		}
	}
	this->firstName = value[0];
	this->lastName = value[1];
	this->nickname = value[2];
	this->phoneNumber = value[3];
	this->darkestSecret = value[4];
}

std::string Contact::getFirstName() const {
	return this->firstName;	
}

std::string Contact::getLastName() const {
	return this->lastName;	
}

std::string Contact::getNickname() const {
	return this->nickname;	
}
