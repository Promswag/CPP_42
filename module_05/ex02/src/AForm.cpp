#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : _signGrade(0), _execGrade(0) {
	throw std::invalid_argument("AForm::InvalidConstructorCall");
	_signed = false;
}

AForm::AForm(const AForm &o) : _name(o._name), _signGrade(o._signGrade), _execGrade(o._execGrade) {
	_signed = false;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw std::invalid_argument("AForm::GradeTooHighException");
	if (signGrade > 150 || execGrade > 150)
		throw std::invalid_argument("AForm::GradeTooLowException");
	_signed = false;
}

AForm& AForm::operator=(const AForm &o) {
	(void)o;
	throw std::invalid_argument("AForm::InvalidConstructorCall");
}

AForm::~AForm() {}

std::string AForm::getName() const { return _name; }

int AForm::getSignGrade() const { return _signGrade; }

int AForm::getExecGrade() const { return _execGrade; }

bool AForm::getSigned() const { return _signed; }

void AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw std::invalid_argument("AForm::GradeTooLowException");
	else if (_signed == true)
		throw std::invalid_argument("AForm::IsSignedException");
	else
		_signed = true;
}

std::ostream& operator<<(std::ostream &out, const AForm &o) {
	return out << o.getName() << ", sign grade " << o.getSignGrade() << ", exec grade " << o.getExecGrade();
}
