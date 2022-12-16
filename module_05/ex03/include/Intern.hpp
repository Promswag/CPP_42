#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
class PresidentialPardonForm;
class RobotomyRequestForm;
class ShrubberyCreationForm;

class Intern {
public:
	Intern();
	Intern(const Intern &o);
	Intern& operator=(const Intern &o);
	~Intern();

	AForm *makeForm(std::string type, std::string target);
};

#endif