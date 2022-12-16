#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	if (grade > 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
}

Bureaucrat::Bureaucrat(const Bureaucrat &o) : _name(o._name), _grade(o._grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &o) {
	if (this == &o)
		return *this;
	_grade = o._grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const { return _name; }

int Bureaucrat::getGrade() const { return _grade; }

void Bureaucrat::incrementGrade() {
	if (_grade <= 1)
		throw std::invalid_argument("Bureaucrat::GradeTooHighException");
	else
		_grade--;
}

void Bureaucrat::decrementGrade() {
	if (_grade >= 150)
		throw std::invalid_argument("Bureaucrat::GradeTooLowException");
	else
		_grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &o) {
	return out << o.getName() << ", bureaucrat grade " << o.getGrade() << ".";
}
