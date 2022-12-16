#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
	switch (rand() % 3) {
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
	}
	return NULL;
}

void identify(Base *p) {
	if (dynamic_cast<A *>(p))
			std::cout << "Type A\n";
	else if (dynamic_cast<B *>(p))
			std::cout << "Type B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C\n";
	else
		std::cout << "Type unknown\n";
}

void identify(Base &p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "Type A\n";
		return;
	} catch (const std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "Type B\n";
		return;
	} catch(const std::exception& e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "Type C\n";
		return;
	} catch(const std::exception& e) {}
	std::cout << "Type Unknown\n";
}

int main(int argc, char **argv, char **envp)
{
	(void)argc;
	(void)argv;
	(void)envp;

	for (int i = 0; i < 10; i++) {
		Base *p = generate();
		std::cout << "*";
		identify(p);
		std::cout << "&";
		identify(*p);
		std::cout << "-------\n";
	}
	return (0);
}
