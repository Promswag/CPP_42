#include "template.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::string a = "Coucou", b = "uocuoC";
		std::cout << "a = " << a << ", b = " << b << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	{
		int a = 0, b = 2;
		std::cout << "a = " << a << ", b = " << b << std::endl;	
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;	
		std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
		std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
	}
	return (0);
}
