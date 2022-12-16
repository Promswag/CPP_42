#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

class Form;

class Bureaucrat {
	std::string const _name;
	int _grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &o);
	Bureaucrat& operator=(const Bureaucrat &o);
	~Bureaucrat();

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	void signForm(Form &form) const;
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &o);

#endif