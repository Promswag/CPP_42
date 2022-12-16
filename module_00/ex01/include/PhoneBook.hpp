#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {

	public:
		PhoneBook();
		~PhoneBook();
		void addContact(void);
		void searchContact(void) const;

	private:
		int contactCount;
		Contact contactArray[8];
		void searchContactByIndex(void) const;
		std::string truncString(std::string str) const;
};

#endif