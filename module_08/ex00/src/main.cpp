#include "easyfind.hpp"
#include <string>
#include <iostream>
#include <vector>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::vector<int> numbers;
		numbers.push_back(5);
		numbers.push_back(-5);
		numbers.push_back(8);
		numbers.push_back(55);
		numbers.push_back(100);

		int toFind[] = {0, -4, 4, 8, 100};
		for (unsigned int i = 0; i < (sizeof(toFind) / sizeof(toFind[0])); i++)
		{
			try {
				int ret = easyfind(numbers, toFind[i]);
				std::cout << ret << "\n";
			}
			catch (std::exception const &e)
			{
				std::cerr << e.what() << "\n";
			}
		}
	}
	return (0);
}
