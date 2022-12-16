#include "Character.hpp"
#include <iostream>

Character::Character() {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name) {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	_name = name;
}

Character::Character(const Character &o) : ICharacter(o) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		_inventory[i] = NULL;
		if (o._inventory[i])
			_inventory[i] = o._inventory[i]->clone();
	}
	_name = o._name;
}

Character& Character::operator=(const Character &o) {
	if (this == &o)
		return *this;		
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (_inventory[i])
			delete _inventory[i];
		_inventory[i] = NULL;
		if (o._inventory[i])
			_inventory[i] = o._inventory[i]->clone();
	}
	_name = o._name;
	return *this;
}

Character::~Character() {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		if (_inventory[i])
			delete _inventory[i];
}

std::string const& Character::getName() const { return _name; }

void Character::equip(AMateria* materia) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (_inventory[i] == NULL) {
			_inventory[i] = materia;
			return;
		}
	}
	std::cout << "Inventory is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < INVENTORY_SIZE) {
		if (_inventory[idx])
			_inventory[idx] = NULL;
		else
			std::cout << idx << ": Empty slot!" << std::endl;
	}
	else
		std::cout << idx << ": Index is out of range!" << std::endl;
	
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < INVENTORY_SIZE) {
		if (_inventory[idx])
			_inventory[idx]->use(target);
		else
			std::cout << idx << ": Empty slot!" << std::endl;
	}
	else
		std::cout << idx << ": Index is out of range!" << std::endl;
}

AMateria* Character::saveMateria(int idx) const {
	if (idx >= 0 && idx < INVENTORY_SIZE) {
		if (_inventory[idx])
			return _inventory[idx];
		else
			std::cout << idx << ": Empty slot!" << std::endl;
	}
	else
		std::cout << idx << ": Index is out of range!" << std::endl;
	return NULL;
}
