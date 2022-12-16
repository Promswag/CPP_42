#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() { throw std::invalid_argument("RobotomyRequestForm::InvalidConstructorCall"); }

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 75, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &o) : AForm(o._name, o._signGrade, o._execGrade),	_target(o._target) {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &o) {
	(void)o;
	throw std::invalid_argument("RobotomyRequestForm::InvalidConstructorCall");
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _execGrade)
		throw std::invalid_argument("RobotomyRequestForm::GradeTooLowException");
	else if (_signed == false)
		throw std::invalid_argument("RobotomyRequestForm::IsNotSignedException");
	else
	{
		if (rand() % 2)
			std::cout << _target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed!" << std::endl;
	}
}
