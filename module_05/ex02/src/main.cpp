#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iomanip>

#define TESTS 10

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	Bureaucrat jenny("Ptitjen", 1);
	Bureaucrat jerem("Jperras", 75);
	Bureaucrat seb("Sebounet", 150);

	struct values {	
		std::string name;
		std::string target;
	} val[TESTS] = {
		{"ShrubberyCreationForm", "prout"},
		{"RobotomyRequestForm", "pipi"},
		{"PresidentialPardonForm", "caca"},
		{"ShrubberyCreationForm", "Seb"},
		{"PresidentialPardonForm", "jerem"},
		{"RobotomyRequestForm", "Jenny"},
		{"RobotomyRequestForm", "Chèvre"},
		{"RobotomyRequestForm", "Loutre"},
		{"RobotomyRequestForm", "Licorne"},
		{"RobotomyRequestForm", "Cactus"}
	};

	for (int i = 0; i < TESTS; i++)
	{
		std::cout << std::left << std::setfill('#') << std::setw(40) << "#####__" + val[i].name + "__" << std::endl;
		try 
		{
			AForm *form;
			{
				if (val[i].name == "ShrubberyCreationForm")
					form = new ShrubberyCreationForm(val[i].target);
				if (val[i].name == "RobotomyRequestForm")
					form = new RobotomyRequestForm(val[i].target);
				if (val[i].name == "PresidentialPardonForm")
					form = new PresidentialPardonForm(val[i].target);
			}
			std::cout << *form << std::endl;
			try
			{
				seb.executeForm(*form);
				seb.signForm(*form);
				jerem.executeForm(*form);
				jerem.signForm(*form);
				jenny.executeForm(*form);
				jenny.signForm(*form);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}

	return (0);
}
