#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
public:
	Ice();
	Ice(const Ice &o);
	Ice& operator=(const Ice &o);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter &target);
};

#endif