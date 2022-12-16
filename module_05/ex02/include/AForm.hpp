#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class AForm {
protected:
	const std::string _name;
	bool _signed;
	const int _signGrade;
	const int _execGrade;

public:
	AForm();
	AForm(const AForm &o);
	AForm(std::string name, int signGrade, int execGrade);
	AForm& operator=(const AForm &o);
	virtual ~AForm();

	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getSigned() const;
	void beSigned(const Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator<<(std::ostream &out, const AForm &o);

#endif