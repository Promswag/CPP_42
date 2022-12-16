#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &o) : _type(o._type) {}

AMateria &AMateria::operator=(const AMateria &o) {
	(void)o;
	return *this;
}

AMateria::~AMateria() {}

std::string const& AMateria::getType() const { return _type; }

void AMateria::use(ICharacter &target) { (void)target; /* Unused Method? #Bait */ }
