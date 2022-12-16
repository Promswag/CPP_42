#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() {
	_type = "DiamondTrap";
	_energyPoints = ScavTrap::_maxEp;
	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
	_type = "DiamondTrap";
	_energyPoints = ScavTrap::_maxEp;
	std::cout << "DiamondTrap " << _name << " std::string constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &o) : ClapTrap(o), ScavTrap(o), FragTrap(o) {
	ClapTrap::_name = o._name + "_clap_name";
	_type = o._type;
	_name = o._name;
	_maxHp = o._maxHp;
	_maxEp = o._maxEp;
	_hitPoints = o._hitPoints;
	_energyPoints = o._energyPoints;
	_attackDamage = o._attackDamage;
	std::cout << "DiamondTrap " << _name << " copy constructor called." << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &o) {
	ClapTrap::_name = o._name + "_clap_name";
	_type = o._type;
	_name = o._name;
	_maxHp = o._maxHp;
	_maxEp = o._maxEp;
	_hitPoints = o._hitPoints;
	_energyPoints = o._energyPoints;
	_attackDamage = o._attackDamage;
	std::cout << "DiamondTrap " << _name << " copy assignement constructor called." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() { std::cout << "DiamondTrap " << _name << " destructor called." << std::endl; }

void DiamondTrap::setName(std::string name) { 
	_name = name;
	ClapTrap::_name = name + "_clap_name";
}

void DiamondTrap::whoAmI() const {
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::_name << "." << std::endl;
}

void DiamondTrap::print() const {
	std::cout << "MAX_HP: " << _maxHp << std::endl;
	std::cout << "HP: " << _hitPoints << std::endl;
	std::cout << "MAX_EP: " << _maxEp << std::endl;
	std::cout << "EP: " << _energyPoints << std::endl;
	std::cout << "AD: " << _attackDamage << std::endl;
}
