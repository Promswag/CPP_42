#include "Ice.hpp"
#include <iostream>

Ice::Ice() { _type = "ice"; }

Ice::Ice(const Ice &o) : AMateria(o) { _type = o._type; }

Ice& Ice::operator=(const Ice &o) {
	(void)o;
	return *this;
}

Ice::~Ice() {}

AMateria *Ice::clone() const { return new Ice(); }

void Ice::use(ICharacter &target) { std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl; }
