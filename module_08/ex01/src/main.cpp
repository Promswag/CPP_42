#include "Span.hpp"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>


int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::srand(std::time(nullptr));
		Span test(1000000);
		std::vector<int> number(1000000);
		std::generate(number.begin(), number.end(), rand);
		number[0] *= -2000000000;
		test.addNumber(number.begin(), number.end());
		// test.fill();
		std::cout << test.shortestSpan() << "\n";
		std::cout << test.longestSpan() << "\n";
	}
	return (0);
}
