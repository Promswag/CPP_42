#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &o) { (void)o; }

Intern &Intern::operator=(const Intern &o) {
	(void)o;
	return *this;
}

Intern::~Intern() {}

AForm* Intern::makeForm(std::string type, std::string target) {
	int index = -1;
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++) {
		if (type == forms[i])
			index = i;
	}
	switch (index) {
		case -1:
			break;
		case 0:
			return new ShrubberyCreationForm(target);
		case 1:
			return new RobotomyRequestForm(target);
		case 2:
			return new PresidentialPardonForm(target);
	}
	throw std::invalid_argument("Intern::InvalidForm");
	return NULL;
}
