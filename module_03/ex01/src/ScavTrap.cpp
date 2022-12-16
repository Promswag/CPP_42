#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() {
	_type = "ScavTrap";
	_name = "";
	_maxHp = 100;
	_maxEp = 50;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	_type = "ScavTrap";
	_maxHp = 100;
	_maxEp = 50;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " std::string constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &o) : ClapTrap(o) {
	_type = "ScavTrap";
	_maxHp = 100;
	_maxEp = 50;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " copy constructor called." << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &o) {
	_type = o._type;
	_name = o._name;
	_maxHp = o._maxHp;
	_maxEp = o._maxEp;
	_hitPoints = o._hitPoints;
	_energyPoints = o._energyPoints;
	_attackDamage = o._attackDamage;
	std::cout << "ScavTrap " << _name << " copy assignement constructor called." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap() {	std::cout << "ScavTrap " << _name << " destructor called." << std::endl; }

void ScavTrap::guardGate() const { std::cout << "ScavTrap " << _name << " is now in gate keeper mode!" << std::endl; }

void ScavTrap::attack(const std::string target)	{
	if (_energyPoints && _energyPoints--)
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is out of energy!" << std::endl;
}
