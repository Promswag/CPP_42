#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm() { throw std::invalid_argument("PresidentialPardonForm::InvalidConstructorCall"); }

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &o) : AForm(o._name, o._signGrade, o._execGrade),	_target(o._target) {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &o) {
	(void)o;
	throw std::invalid_argument("PresidentialPardonForm::InvalidConstructorCall");
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _execGrade)
		throw std::invalid_argument("PresidentialPardonForm::GradeTooLowException");
	else if (_signed == false)
		throw std::invalid_argument("PresidentialPardonForm::IsNotSignedException");
	else
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
