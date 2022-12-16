#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &o);

#endif