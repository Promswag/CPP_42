#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	_type = "ClapTrap";
	_name = "";
	_maxHp = 10;
	_maxEp = 10;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	_type = "ClapTrap";
	_maxHp = 10;
	_maxEp = 10;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " std::string constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &o) : 
	_type(o._type),
	_name(o._name),
	_maxHp(o._maxHp),
	_maxEp(o._maxEp),
	_hitPoints(o._hitPoints),
	_energyPoints(o._energyPoints),
	_attackDamage(o._attackDamage) {
	std::cout << "ClapTrap " << _name << " copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &o) {
	_type = o._type;
	_name = o._name;
	_maxHp = o._maxHp;
	_maxEp = o._maxEp;
	_hitPoints = o._hitPoints;
	_energyPoints = o._energyPoints;
	_attackDamage = o._attackDamage;
	std::cout << "ClapTrap " << _name << " copy assignement constructor called." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {	std::cout << "ClapTrap " << _name << " destructor called." << std::endl; }

void ClapTrap::setName(std::string name) { _name = name; }

std::string ClapTrap::getName(void) const { return _name; }

void ClapTrap::attack(const std::string target) {
	if (_energyPoints && _energyPoints--)
		std::cout << _type << " " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else
		std::cout << _type << " " << _name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints) {
		std::cout << _type << " " << _name << " takes " << amount << " points of damage!" << std::endl;
		_hitPoints -= amount;
		_hitPoints = _hitPoints < 0 ? 0 : _hitPoints;
		if (!_hitPoints)
			std::cout << _type << " " << _name << " is completely destroyed!" << std::endl;
		else
			std::cout << _type << " " << _name << " now has " << _hitPoints << " hits points!" << std::endl;
	}
	else
		std::cout << _type << " " << _name << " is already completely destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _energyPoints--) {
		std::cout << _type << " " << _name << " repairs itself for " << amount << " hit points." << std::endl;
		_hitPoints += amount;
		_hitPoints = _hitPoints > _maxHp ? _maxHp : _hitPoints;
		std::cout << _type << " " << _name << " now has " << _hitPoints << " hits points!" << std::endl;
	}
	else
		std::cout << _type << " " << _name << " is out of energy!" << std::endl;
}
