#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

class Bureaucrat;

class Form {
	const std::string _name;
	bool _signed;
	const int _signGrade;
	const int _execGrade;

public:
	Form();
	Form(const Form &o);
	Form(std::string name, int signGrade, int execGrade);
	Form& operator=(const Form &o);
	~Form();

	std::string getName() const;
	int getSignGrade() const;
	int getExecGrade() const;
	bool getSigned() const;
	void beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &o);

#endif