#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		ClapTrap();
		ClapTrap(const ClapTrap &c);
		ClapTrap& operator = (const ClapTrap &c);
		~ClapTrap();

		ClapTrap(std::string name);
		void setName(std::string name);
		std::string getName(void) const;

		void attack(const std::string target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
};

#endif