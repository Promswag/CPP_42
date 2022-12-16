#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
public:
	Cure();
	Cure(const Cure &o);
	Cure& operator=(const Cure &o);
	virtual ~Cure();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif