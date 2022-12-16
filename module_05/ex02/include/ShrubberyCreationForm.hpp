#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	std::string _target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &o);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &o);
	virtual ~ShrubberyCreationForm();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif