#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() {
	_name = "";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name) {
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " std::string constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c) : 
	_name(c._name),
	_hitPoints(c._hitPoints),
	_energyPoints(c._energyPoints),
	_attackDamage(c._attackDamage) {
	std::cout << "ClapTrap " << _name << " copy constructor called." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &c) {
	_name = c._name;
	_hitPoints = c._hitPoints;
	_energyPoints = c._energyPoints;
	_attackDamage = c._attackDamage;
	std::cout << "ClapTrap " << _name << " copy assignement constructor called." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap() {	std::cout << "ClapTrap " << _name << " destructor called." << std::endl; }

void ClapTrap::setName(std::string name) { _name = name; }

std::string ClapTrap::getName(void) const { return _name; }

void ClapTrap::attack(const std::string target) {
	if (_energyPoints && _energyPoints--)
		std::cout << "Claptrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "Claptrap " << _name << " is out of energy!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoints) {
		std::cout << "Claptrap " << _name << " takes " << amount << " points of damage!" << std::endl;
		_hitPoints -= amount;
		_hitPoints = _hitPoints < 0 ? 0 : _hitPoints;
		if (!_hitPoints)
			std::cout << "Claptrap " << _name << " is completely destroyed!" << std::endl;
	}
	else
		std::cout << "Claptrap " << _name << " is already completely destroyed!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_energyPoints && _energyPoints--) {
		std::cout << "Claptrap " << _name << " repairs itself for " << amount << " hit points." << std::endl;
		_hitPoints += amount;
		_hitPoints = _hitPoints > 10 ? 10 : _hitPoints;
	}
	else
		std::cout << "Claptrap " << _name << " is out of energy!" << std::endl;
}
