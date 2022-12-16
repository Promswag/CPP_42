#include "Array.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		Array<std::string> test;
		std::cout << test.size() << "\n";
	}
	std::cout << "-----\n";
	{
		Array<int> test(5);
		std::cout << test.size() << "\n";
		for (int i = -1; i < 6; i++) {
			try {
				std::cout << test[i] << "\n";
			} catch (std::exception &e) {
				std::cout << e.what() << "\n";
			}
		}
		test[3] = 5;
		for (int i = -1; i < 6; i++) {
			try {
				std::cout << test[i] << "\n";
			} catch (std::exception &e) {
				std::cout << e.what() << "\n";
			}
		}
	}
	std::cout << "-----\n";
	{
		Array<std::string> test(10);
		std::cout << test.size() << "\n";
		for (int i = -1; i < 11; i++) {
			try {
				std::cout << test[i] << "\n";
			} catch (std::exception &e) {
				std::cout << e.what() << "\n";
			}
		}
		std::cout << "-----\n";
		test[0] = "prout";
		test[1] = "prou";
		test[2] = "pro";
		test[3] = "pr";
		test[4] = "p";
		test[5] = "e";
		test[6] = "er";
		test[7] = "ert";
		test[8] = "erty";
		test[9] = "ertyu";
		for (int i = -1; i < 11; i++) {
			try {
				std::cout << test[i] << "\n";
			} catch (std::exception &e) {
				std::cout << e.what() << "\n";
			}
		}
		Array<std::string> ca(5);
		test = ca;
		Array<std::string> copy(test);
		copy[4] = "Avion";
		std::cout << test[4] << "\n";
		std::cout << copy[4] << "\n";
	}
	std::cout << "-----\n";
	return (0);
}
