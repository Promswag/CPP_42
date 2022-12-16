#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	std::string _target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &o);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &o);
	virtual ~PresidentialPardonForm();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif