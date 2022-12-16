#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	_type = "FragTrap";
	_maxHp = 100;
	_maxEp = 100;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_type = "FragTrap";
	_maxHp = 100;
	_maxEp = 100;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " std::string constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &o) : ClapTrap(o) {
	_type = "FragTrap";
	_maxHp = 100;
	_maxEp = 100;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " copy constructor called." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &o) {
	_type = o._type;
	_name = o._name;
	_maxHp = o._maxHp;
	_maxEp = o._maxEp;
	_hitPoints = o._hitPoints;
	_energyPoints = o._energyPoints;
	_attackDamage = o._attackDamage;
	std::cout << "FragTrap " << _name << " copy assignement constructor called." << std::endl;
	return *this;
}

FragTrap::~FragTrap() {	std::cout << "FragTrap " << _name << " destructor called." << std::endl; }

void FragTrap::highFivesGuys() const { std::cout << "FragTrap " << _name << " is asking for a High Fives!" << std::endl; }