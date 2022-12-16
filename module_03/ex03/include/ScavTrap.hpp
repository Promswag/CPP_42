#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public virtual ClapTrap {
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &o);
		ScavTrap & operator = (const ScavTrap &o);
		virtual ~ScavTrap();

		void guardGate() const;
		void attack(const std::string target);

	protected:
		static int _maxEp;
};

#endif