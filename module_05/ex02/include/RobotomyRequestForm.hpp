#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	std::string _target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &o);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &o);
	virtual ~RobotomyRequestForm();

	virtual void execute(Bureaucrat const &executor) const;
};

#endif