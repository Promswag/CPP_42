#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _signGrade(0), _execGrade(0) {
	throw std::invalid_argument("Form::InvalidConstructorCall");
	_signed = false;
}

Form::Form(const Form &o) : _name(o._name), _signGrade(o._signGrade), _execGrade(o._execGrade) {
	_signed = false;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signGrade(signGrade), _execGrade(execGrade) {
	if (signGrade < 1 || execGrade < 1)
		throw std::invalid_argument("Form::GradeTooHighException");
	if (signGrade > 150 || execGrade > 150)
		throw std::invalid_argument("Form::GradeTooLowException");
	_signed = false;
}

Form& Form::operator=(const Form &o) {
	(void)o;
	throw std::invalid_argument("Form::InvalidConstructorCall");
}

Form::~Form() {}

std::string Form::getName() const { return _name; }

int Form::getSignGrade() const { return _signGrade; }

int Form::getExecGrade() const { return _execGrade; }

bool Form::getSigned() const { return _signed; }

void Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _signGrade)
		throw std::invalid_argument("Form::GradeTooLowException");
	else if (_signed == true)
		throw std::invalid_argument("Form::IsSignedException");
	else
		_signed = true;
}

std::ostream& operator<<(std::ostream &out, const Form &o) {
	return out << o.getName() << ", sign grade " << o.getSignGrade() << ", exec grade " << o.getExecGrade();
}
