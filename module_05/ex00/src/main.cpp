#include "Bureaucrat.hpp"
#include <iomanip>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	std::cout << std::left;
	std::cout << std::setfill('#') << std::setw(33) << "#####__JEAN__" << std::endl;
	try {
		Bureaucrat jean("Jean", 9);
		std::cout << jean << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::setfill('#') << std::setw(33) << "#####__THIERRY__" << std::endl;
	try {
		Bureaucrat thierry("Thierry", 0);
		std::cout << thierry << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::setfill('#') << std::setw(33) << "#####__SEB__" << std::endl;
	try {
		Bureaucrat seb("Seb", 150);
		std::cout << seb << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::setfill('#') << std::setw(33) << "#####__FRED__" << std::endl;
	try {
		Bureaucrat fred("Fred", 151);
		std::cout << fred << std::endl;
	} catch(std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << std::setfill('#') << std::setw(33) << "#####__BOB__" << std::endl;
	try {
		Bureaucrat bob("Bob", 9);
		std::cout << bob << std::endl;
		for (int i = 0; i < 9; i++) {
			try {
				bob.incrementGrade();
			} catch(std::exception &e){
				std::cout << bob << " -> " << e.what() << std::endl;
			}
		}
		for (int i = 0; i < 150; i++) {
			try {
				bob.decrementGrade();
			} catch(std::exception &e){
				std::cout << bob << " -> " << e.what() << std::endl;
			}
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
