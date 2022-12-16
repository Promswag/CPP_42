#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iomanip>

#define TESTS 13

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
		{"shrubbery creation", "prout"},
		{"robotomy request", "pipi"},
		{"presidential pardon", "caca"},
		{"shrubbery creation", "Seb"},
		{"presidentiale pardon", "jerem"},
		{"presidential pardon", "jerem"},
		{"robotomy request", "Jenny"},
		{"robotomY request", "Chèvre"},
		{"robotomy request", "Loutre"},
		{"robotomy request", "Loutre"},
		{"robotomy request", "Licorne"},
		{"robotomy request", "Cactus"},
		{"GNELOL request", "Cactus"}
	};

	for (int i = 0; i < TESTS; i++)
	{
		std::cout << std::left << std::setfill('#') << std::setw(40) << "#####__" + val[i].name + "__" << std::endl;
		try 
		{
			Intern someRandomIntern;
			AForm *form;
			{
				form = someRandomIntern.makeForm(val[i].name, val[i].target);
			}
			std::cout << *form << std::endl;
			try
			{
				seb.executeForm(*form);
				jerem.executeForm(*form);
				jenny.executeForm(*form);
				seb.signForm(*form);
				jerem.signForm(*form);
				jenny.signForm(*form);
				seb.executeForm(*form);
				jerem.executeForm(*form);
				jenny.executeForm(*form);
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
