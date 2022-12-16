#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iomanip>

#define TESTS 7

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
		int signGrade; 
		int execGrade;	
	} val[TESTS] = {{"0", 0, 0}, {"1", 1, 1}, {"2", 150, 150}, {"3", 74, 74}, {"4", 75, 75}, {"5", 76, 76}, {"6", 151, 151}};

	for (int i = 0; i < TESTS; i++)
	{
		std::cout << std::left << std::setfill('#') << std::setw(33) << "#####__FORM_" + val[i].name + "__" << std::endl;
		try 
		{
			Form form(val[i].name, val[i].signGrade, val[i].execGrade);
			std::cout << form << std::endl;
			try
			{
				seb.signForm(form);
				jerem.signForm(form);
				jenny.signForm(form);
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

	std::cout << std::left << std::setfill('#') << std::setw(33) << "#####__FORM__" << std::endl;
	try {
		Form form;
		std::cout << form << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Form form("0", 1, 1);
		std::cout << form << std::endl;
		Form formu("0", 1, 1);
		std::cout << formu << std::endl;
		form = formu;
		std::cout << form << std::endl;
	} catch(const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return (0);
}
