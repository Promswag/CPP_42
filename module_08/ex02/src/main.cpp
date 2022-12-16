#include "MutantStack.hpp"
#include <string>
#include <iostream>
#include <vector>

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	{
		std::cout << "#___VECTOR___#\n";
		std::vector<int> test;
		test.push_back(1);
		test.push_back(2);
		test.push_back(3);
		std::cout << "BEGIN\n";
		try {
			std::vector<int>::iterator it = test.begin();
			std::cout << *it++ << "\n";
			std::cout << *it++ << "\n";
			std::cout << *it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "RBEGIN\n";
		try {
			std::vector<int>::reverse_iterator it = test.rbegin();
			std::cout << *it++ << "\n";
			std::cout << *it++ << "\n";
			std::cout << *it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "END\n";
		try {
			std::vector<int>::iterator it = test.end();
			std::cout << *--it << "\n"; 
			std::cout << *--it << "\n";
			std::cout << *--it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "REND\n";
		try {
			std::vector<int>::reverse_iterator it = test.rend();
			std::cout << *--it << "\n"; 
			std::cout << *--it << "\n";
			std::cout << *--it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		// MutantStack<int, std::vector<int> > copy(test);
	}
	{
		std::cout << "#___MUTANTSTACK___#\n";
		MutantStack<int> test;
		test.push(1);
		test.push(2);
		test.push(3);
		std::cout << "BEGIN\n";
		try {
			MutantStack<int>::iterator it = test.begin();
			std::cout << *it++ << "\n";
			std::cout << *it++ << "\n";
			std::cout << *it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "RBEGIN\n";
		try {
			MutantStack<int>::reverse_iterator it = test.rbegin();
			std::cout << *it++ << "\n";
			std::cout << *it++ << "\n";
			std::cout << *it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "END\n";
		try {
			MutantStack<int>::iterator it = test.end();
			std::cout << *--it << "\n"; 
			std::cout << *--it << "\n";
			std::cout << *--it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "REND\n";
		try {
			MutantStack<int>::reverse_iterator it = test.rend();
			std::cout << *--it << "\n"; 
			std::cout << *--it << "\n";
			std::cout << *--it << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		std::cout << "std::stack copy\n";
		std::stack<int> m(test);
		try {
			std::cout << m.size() << "\n";
		} catch (std::exception const &e) { std::cerr << e.what(); }
		for (int i = 0; i < 4; i++) {
			try {
				if (m.size())
					m.pop();
				std::cout << m.size() << "\n";
			} catch (std::exception const &e) { std::cerr << e.what(); }
		}
	}
	return (0);
}
