#pragma once
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Contact {
	public:
		Contact();
		~Contact();
		void displayInfo() const;
		void updateInfo();
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickname() const;

	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;
};

#endif