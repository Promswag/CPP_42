#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &o);
		ScavTrap & operator = (const ScavTrap &o);
		~ScavTrap();

		void guardGate() const;
		void attack(const std::string target);
};

#endif