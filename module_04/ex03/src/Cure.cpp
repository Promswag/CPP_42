#include "Cure.hpp"
#include <iostream>

Cure::Cure() { _type = "cure"; }

Cure::Cure(const Cure &o) : AMateria(o) { _type = o._type; }

Cure& Cure::operator=(const Cure &o) {
	(void)o;
	return *this;
}

Cure::~Cure() {}

AMateria *Cure::clone() const { return new Cure(); }

void Cure::use(ICharacter &target) { std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; }
