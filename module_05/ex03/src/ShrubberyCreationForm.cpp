#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() { throw std::invalid_argument("ShrubberyCreationForm::InvalidConstructorCall"); }

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &o) : AForm(o._name, o._signGrade, o._execGrade),	_target(o._target) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &o) {
	(void)o;
	throw std::invalid_argument("ShrubberyCreationForm::InvalidConstructorCall");
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > _execGrade)
		throw std::invalid_argument("ShrubberyCreationForm::GradeTooLowException");
	else if (_signed == false)
		throw std::invalid_argument("ShrubberyCreationForm::IsNotSignedException");
	else
	{
		std::ofstream ofs(_target);
		if (ofs.is_open()) {
			ofs
			<< "               ,@@@@@@@,              " << std::endl
			<< "       ,,,.   ,@@@@@@/@@,  .oo8888o.  " << std::endl
			<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << std::endl
			<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
			<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
			<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << std::endl
			<< "   `&%\\ ` /%&'    |.|        \\ '|8'   " << std::endl
			<< "       |o|        | |         | |     " << std::endl
			<< "       |.|        | |         | |     " << std::endl
			<< " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
			ofs.close();
		} else {
			std::cout << "Could not create " << _target << "." << std::endl;
		}
	}
}
