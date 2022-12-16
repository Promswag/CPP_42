#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

#define INVENTORY_SIZE 4

class Character : public ICharacter {
	AMateria *_inventory[INVENTORY_SIZE];
	std::string _name;

public:
	Character();
	Character(std::string name);
	Character(const Character &o);
	Character& operator=(const Character &o);
	virtual ~Character();

	std::string const & getName() const;
	void equip(AMateria *materia);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	AMateria* saveMateria(int idx) const;
};

#endif