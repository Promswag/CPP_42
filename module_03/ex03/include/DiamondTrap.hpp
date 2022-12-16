#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap {
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &o);
		DiamondTrap & operator = (const DiamondTrap &o);
		~DiamondTrap();

		void setName(std::string name);
		void whoAmI() const;
		void print() const;

	private:
		std::string _name;
};

#endif