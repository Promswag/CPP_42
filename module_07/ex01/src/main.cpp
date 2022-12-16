#include "iter.hpp"
#include <string>
#include <iostream>


template <typename T>
void print(T a) {
	std::cout << a << "\n";
}

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::string array[] = {"Un", "Deux", "Trois", "Quatre"};
		::iter(array, sizeof(array) / sizeof(array[0]), &::print);
	}
	{
		int array[] = {0, 1, 2, 3};
		::iter(array, sizeof(array) / sizeof(array[0]), &::print);
	}
	{
		double array[] = {0.1, 0.2, 0.3, 0.4};
		::iter(array, sizeof(array) / sizeof(array[0]), &::print);
	}
	{
		char array[] = {'a', 'b', 'c', 'd'};
		::iter(array, sizeof(array) / sizeof(array[0]), &::print);
	}
	return (0);
}
